#include <bits/stdc++.h>

using namespace std;

const int N = 2e5+1;
const int M = 64;
const int MOD = 1e9+7;

int v[N], a[N][M];

void setIO(){
    freopen("inp.txt", "r", stdin);
}

void solve(){
    int n,k,ans;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        cin >> v[i];
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= 63; j++){
            a[i][j] = j == v[i] ? 1 : 0;
            a[i][j] = (a[i][j] + a[i-1][j]) % MOD;
            a[i][j&v[i]] = (a[i][j&v[i]] + a[i-1][j]) % MOD;
        }
    }
    ans = 0;
    for(int j = 0; j <= 63; j++){
        if(__builtin_popcount(j) == k){
            ans = (ans + a[n][j]) % MOD;
        }
    }
    cout << ans << endl;
}

int main(){
    //setIO();
    int t;
    cin >> t;
    while(t--)
        solve();
}
