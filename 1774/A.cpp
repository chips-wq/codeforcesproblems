#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s(n,0);
    cin >> s;
    bool p = s[0] == '0' ? 0 : 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == '1'){
            if(p == 1){
                cout << '-';
            }else{
                cout << '+';
            }
            p = !p;
        }else{
            cout << '+';
        }
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
