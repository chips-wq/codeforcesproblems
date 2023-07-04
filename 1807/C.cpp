#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,x[26];
    for(int i = 0; i < 26; i++){
        x[i] = -1;
    }
    bool state = 1;
    cin >> n;
    string s(n,0);
    cin >> s;
    x[s[0]-'a'] = 0;
    for(int i = 1; i < s.size(); i++){
        if(x[s[i]-'a'] == -1){
            x[s[i]-'a'] = state;
        }else if(x[s[i]-'a'] != state){
            cout << "no" << endl;
            return;
        }
        state = !state;
    }
    cout << "yes" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
