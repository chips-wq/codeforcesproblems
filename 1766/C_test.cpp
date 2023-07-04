#include <bits/stdc++.h>

using namespace std;
const int M = 2e5;

int a[2][M];

void solve(){
    int n;
    cin >> n;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            char x;
            cin >> x;
            a[i][j] = x == 'W' ? 0 : 1;
        }
    }
    int pos = -1;
    for(int i = 0; i < n; i++){
        if(a[0][i] != a[1][i] && (a[0][i] || a[1][i]))
            pos = i;
    }
    if(pos == -1){
        cout << "YES" << endl;
        return;
    }
    bool ok = 1;
    int cur = a[0][pos] ? 0 : 1;
    for(int i = pos-1; i >= 0; i--){
        if(a[cur][i] == 0)
            ok = 0;
        if(a[!cur][i]){
            cur = !cur;
        }
    }
    for(int i = pos+1; i < n; i++){
        if(a[cur][i] == 0)
            ok = 0;
        if(a[!cur][i]){
            cur = !cur;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
