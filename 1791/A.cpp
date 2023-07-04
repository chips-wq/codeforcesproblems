#include <bits/stdc++.h>

using namespace std;

void solve(){
    char t;
    cin >> t;
    string s = "codeforces";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == t){
            cout << "yes" << endl;
            return;
        }
    }
    cout << "no" << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
