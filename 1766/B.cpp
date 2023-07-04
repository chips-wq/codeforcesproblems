#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s(n,0);
    cin >> s;
    unordered_set<string> s1;
    string last = string() + s[0] + s[1];
    for(int i = 1; i < n-1; i++){
        string tmp = string() + s[i] + s[i+1];
        if(s1.find(tmp) != s1.end()){
            cout << "yes" << endl;
            return;
        }
        s1.insert(last);
        last = tmp;
    }
    cout << "no" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
