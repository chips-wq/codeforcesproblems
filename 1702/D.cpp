#include <bits/stdc++.h>

using namespace std;

void solve(){
    set<int> s1,s2;
    int n,x,y;
    cin >> n;
    bool OK = 1;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        bool ok = 0;
        if(OK == 0)
            continue;
        if(x == y){
            OK = 0;
        }
        if(s1.find(x) == s1.end() && s1.find(y) == s1.end()){
            s1.insert(x);
            s1.insert(y);
            ok = 1;
        }else if(s2.find(x) == s2.end() && s2.find(y) == s2.end()){
            s2.insert(x);
            s2.insert(y);
            ok = 1;
        }
        if(ok == 0)
            OK = 0;
    }
    cout << (OK ? "YES" : "NO") << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
