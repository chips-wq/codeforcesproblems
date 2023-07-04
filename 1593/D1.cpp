#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, mm;
    cin >> n;
    vector<int> v(n);
    cin >> v[0];
    mm = v[0];
    bool isDiff = 0;
    for(int i = 1; i < n; i++){
        cin >> v[i];
        if(v[i] != mm){
            isDiff = 1;
        }
        mm = min(v[i], mm);
    }
    if(isDiff == 0){
        cout << -1 << endl;
        return;
    }
    for(int i = 0; i < n; i++){
        v[i] -= mm;
    }

    int mgcd = __gcd(v[0],v[1]);
    for(int i = 2; i < n; i++){
        mgcd = __gcd(mgcd, v[i]);
    }
    cout << mgcd << endl;
}

int main(){
    // freopen("smol.in", "r", stdin);
    int t;
    cin >> t;
    while(t--)
        solve();
}

