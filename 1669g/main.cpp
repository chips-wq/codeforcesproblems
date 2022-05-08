#include <iostream>

using namespace std;

void show(char a[][50] , int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << a[i][j];
		}
		cout << '\n';
	}
}
void solve(char a[][50] , int n , int m){
	for(int i = n-2;i>=0;i--){
		for(int j = 0;j < m; j++){
			if(a[i][j] == '*'){
				int k = i+1;
				while(k < n && a[k][j] != '*' && a[k][j] != 'o'){
					k++;
				}
				k--;
				swap(a[k][j] , a[i][j]);
			}
		}
	}
	show(a , n , m);
}
int main(){
	int t, n , m;
	char a[50][50];
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n >> m;
		for(int j = 0; j < n;j++){
			for(int k = 0;k < m;k++){
				cin >> a[j][k];
			}
		}
		solve(a , n , m);
	}
}

			
