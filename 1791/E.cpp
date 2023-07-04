#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve(){
    int n, lt0 = 0, s0 = 0, min_n = (int)2e9 + 1;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        min_n = min(min_n, abs(v[i]));
        s0+=abs(v[i]);
        if(v[i] < 0){
            lt0++;
        }
    }
    if(lt0 % 2 == 1){
        s0 -= min_n * 2;
    }
    cout << s0 << endl;
    return;
}

int32_t main(){
    //freopen("inp.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
        solve();
}
