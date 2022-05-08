#include <iostream>
#include <vector>
using namespace std;

long long cost_increasing(vector<long long> v, int i){
	long long cost = 1;
	for(int j = i+1;j < v.size();j++){
		if(v[j] <= v[j-1]){
			long long moves = v[j-1] / v[j] + 1;
			cost+=moves;
			v[j]*=moves;
		}
		else
			cost++;
	}	
	return cost;

}
long long cost_decreasing(vector<long long> v, int i){
	long long cost = 1;
	for(int j = i-1;j >= 0;j--){
		if(v[j] <= v[j+1]){
			long long moves = v[j+1] / v[j] + 1;
			cost+=moves;
			v[j]*=moves;
		}
		else
			cost++;
	}	
	return cost;

}
long long solve(vector<long long> v , int n){
	long long res = min(cost_increasing(v , 0) , cost_decreasing(v , v.size()-1)) - 1;
	for(int i = 1; i < n-1; i++){
		long long d = cost_decreasing(v , i - 1);
		long long inc = cost_increasing(v , i+1);
		//cout << "i:" << i << ", dec:" << d << ", inc:" << inc << endl;
		res = min(res , d+inc);
	}
	return res;
}
int main(){
	int n;
	cin >> n;
	vector<long long> v(n , 0);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	long long res = solve(v , n);
	cout << res << '\n';
}
