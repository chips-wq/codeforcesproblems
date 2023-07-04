#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> va(26,0), vA(26,0);
    string s(n,0);
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])){
            va[s[i]-'a']++;
        }else{
            vA[s[i]-'A']++;
        }
    }
    int infPos = 0;
    int ans = 0;
    for(int i = 0; i < 26; i++){
        int tt = min(va[i], vA[i]);
        // printf("va[i] is %d\nvA[i] is %d\n", va[i], vA[i]);
        ans += tt;
        int med = (va[i] + vA[i]) / 2;
        // printf("tt is %d\n med is %d\n", tt, med);
        infPos += med - tt;
        // return;
    }
    cout << ans + min(infPos, k) << endl;
    //cout << infPos << endl;
}

void setIO(){
    freopen("inp.txt", "r", stdin);
}

int main(){
    //setIO();
    int t;
    cin >> t;
    while(t--)
        solve();
}
