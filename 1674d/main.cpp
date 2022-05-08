#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> v){	
	if(v.size() <= 2){
		cout << "YES" << endl;
		return 0;
	}
	int start = 0;
	if(v.size() % 2 == 1){
		start = 1;
		if(!(v[0] <= min(v[1] , v[2]))){
				cout << "NO" << endl;
				return 0;
		}
	}
	while(start < v.size()-2){
		int firstPair = max(v[start] , v[start+1]);
		int secondPair = min(v[start+2] , v[start+3]);
		if(!(firstPair <= secondPair)){
			cout << "NO" << endl;
			return 0;
		}
		start+=2;
	}
	cout << "YES" << endl;
	return 0;
}
int main(){
	int t , n;
	cin >> t;
	for(int i = 0;i < t;i++){
		cin >> n;
		vector<int> v(n , 0);
		for(int j = 0;j < n;j++){
			cin >> v[j];
		}
		solve(v);
	}
}
