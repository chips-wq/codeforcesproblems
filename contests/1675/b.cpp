#include <iostream>
#include <vector>

using namespace std;

int main(){
	int t;
	cin >> t;
	for (int k = 0; k < t; k++){
forloop:
		int n;
		cin >> n;
		vector<int> v(n , 0);
		for(int i = 0;i < n; i++){
			cin >> v[i];
		}
		int i = v.size()-2;
		int op = 0;
		while(i >= 0){
			while(v[i] >= v[i+1]){
				if(v[i] == v[i+1] && v[i] == 0){
					cout << -1 << endl;
					goto forloop;
				}
				v[i]/=2;
				op++;
			}
			i--;
		}
		cout << op << endl;
	}
}
