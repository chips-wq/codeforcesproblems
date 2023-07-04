#include <bits/stdc++.h>

using namespace std;

//#define DEBUG 1
#define MOD (int)1e10 + 7
#define ll long long

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == cnt+1){
            cnt++;
        }
    }
    cout << ceil((float)(n-cnt) / k) << endl;
}

int main(){
    #ifdef DEBUG
    freopen("inp.txt", "r", stdin);
    #endif
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
