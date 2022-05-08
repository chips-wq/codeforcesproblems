#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int>& v , int n){
	int size = n-4;
	int perm = 0;
	for(int a = 0; a <= size;a++){
		for(int b = a + 1; b <= size+1; b++){
			for(int c = b+1; c <= size+2; c++){
				if(v[a] > v[c]){
					continue;
				}
				for(int d = c+1; d<= size+3;d++){
					if(v[b] < v[d]){
						continue;
					}
					//cout << "[" << a << ',' << b << ',' << c << ',' << d << ']' << endl;
					perm++;
				}
			}
		}
	}
	cout << perm << '\n';
}
int main(){
	int t , n;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n;
		vector<int> v(n , 0);
		for(int j = 0; j < n;j++){
			cin >> v[j];
		}
		solve(v , n);
	}
}
