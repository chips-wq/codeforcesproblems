#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void solve(vector<int> v , int n){
	unordered_map<int , int> m;
	for(int i = 0; i < n;i++){
		m[v[i]]++;
	}
	if(m[0] != 0){
		cout << n - m[0] << '\n';
		return;
	}
	for(auto pair : m){
		if(pair.second > 1){
			cout << n << '\n';
			return;
		}
	}
	cout << n+1 << '\n';
	return;
}
int main(){
	int t , n;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n;
		vector<int> v(n , 0);
		for(int j = 0; j < n; j++){
			cin >> v[j];
		}
		solve(v , n);
	}
}
