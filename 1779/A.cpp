#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s(n,0);
    cin >> s;
    bool hasL = 0, hasR = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'L')
            hasL = 1;
        if(s[i] == 'R')
            hasR = 1;
        if(s[i] == 'L' && s[i+1] == 'R'){
            cout << i + 1 << endl;
            return;
        }
    }
    if(hasL && hasR){
        cout << 0 << endl;
        return;
    }
    cout << -1 << endl;
    return;
}

int main(){
    freopen("inp.in", "r", stdin);
    int t;
    cin >> t;
    while(t--)
        solve();
}
