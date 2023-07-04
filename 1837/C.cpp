#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin >> s;
    char lc = '0';
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '?'){
            lc = s[i];
        }else{
            s[i] = lc;
        }
    }
    printf("%s\n", s.c_str());
}

int main(){
    int n;
    cin >> n;
    while(n--)
        solve();
}
