#include <bits/stdc++.h>

using namespace std;

int a[100][100];

void solve(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i < n; i++){
        int x = a[i-1][0], y = a[i][0], z = a[(i+1) % n][0];
        if(x != y){
            int line = 0;
            if(z == x){
                //use x as the start and go on the line i
                cout << x << " ";
                line = i; 
            }else{
                //use y as the start and go on the line i-1
                cout << y << " ";
                line = i-1;
            }
            
            for(int j = 0; j < n-1; j++){
                cout << a[line][j] << " ";
            }
            cout << endl;
            return;
        }
    }
}

int main(){
    //freopen("input.txt", "r", stdin); 
    int t;
    cin >> t;
    while(t--)
        solve();
}
