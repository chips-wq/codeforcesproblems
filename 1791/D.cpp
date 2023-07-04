#include <bits/stdc++.h>

using namespace std;

int v1[26];
int v2[26];
void solve(){
    int n,u1 = 0,u2 = 0, mm = 1;
    cin >> n;
    string s(n,0);
    cin >> s;
    for(int i = 0; i < 26; i++){
        v1[i] = 0;
        v2[i] = 0;
    }
    for(int i = 0; i < s.size(); i++){
        if(v1[s[i] - 'a'] == 0){
            u1++;
        }
        v1[s[i] - 'a']++;
    }
    for(int i = 0; i < s.size(); i++){
        if(v2[s[i] - 'a'] == 0){
            u2++;
        }
        v2[s[i] - 'a']++;
        v1[s[i] - 'a']--;
        if(v1[s[i] - 'a'] == 0){
            u1--;
        }
        mm = max(mm, u1+u2);
    }
    cout << mm << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
