#include <iostream>
#include <vector>
using namespace std;

int cost_increasing(vector<int> v, int i){
	int cost = 1;
	for(int j = i+1;j < v.size();j++){
		if(v[j] <= v[j-1]){
			int moves = v[j-1] / v[j] + 1;
			cost+=moves;
			v[j]*=moves;
		}
		else
			cost++;
	}	
	return cost;

}
int cost_decreasing(vector<int> v, int i){
	int cost = 1;
	for(int j = i-1;j >= 0;j--){
		if(v[j] <= v[j+1]){
			int moves = v[j+1] / v[j] + 1;
			cost+=moves;
			v[j]*=moves;
		}
		else
			cost++;
	}	
	return cost;

}
int solve(vector<int> v , int n){
	int res = min(cost_increasing(v , 0) , cost_decreasing(v , v.size()-1)) - 1;
	for(int i = 1; i < n-1; i++){
		int d = cost_decreasing(v , i - 1);
		int inc = cost_increasing(v , i+1);
		//cout << "i:" << i << ", dec:" << d << ", inc:" << inc << endl;
		res = min(res , d+inc);
	}
	return res;
}
int main(){
	int n;
	cin >> n;
	vector<int> v(n , 0);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	int res = solve(v , n);
	cout << res << '\n';
}
