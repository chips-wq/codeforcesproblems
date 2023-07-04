#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s(n,0);
    vector<int> ans(n);
    cin >> s;
    int cur = 0,h_1 = 0, h_2 = 0;
    for(int i = 0; i < n; i++){
        cur += (s[i] == '(' ? 1 : -1);
        if(cur > 0){
            ans[i] = 1;
            h_1 = 1;
        }
        if(cur < 0){
            ans[i] = 2;
            h_2 = 1;
        }
        if(cur == 0)
            ans[i] = ans[i-1];
    }
    if(cur != 0){
        cout << -1 << endl;
        return;
    }
    int g_1 = 0;
    if(h_2 && !h_1){
        g_1 = 1;
    }
    cout << h_2+h_1 << endl;
    for(int i = 0; i < n; i++)
        cout << ans[i] - g_1 << " ";
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
