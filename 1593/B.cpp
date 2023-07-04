#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll steps(string &s, char ch1, char ch2){
    ll poz_ch2 = s.size()-1;
    while(poz_ch2 >= 0 && s[poz_ch2] != ch2){
        poz_ch2--;
    }
    ll poz_ch1 = poz_ch2 - 1;
    while(poz_ch1 >= 0 && s[poz_ch1] != ch1){
        poz_ch1--;
    }
    if(poz_ch1 == -1 || poz_ch2 == -1){
        return (ll)1e18+1;
    }
    ll n = s.size() - 1;
    // printf("%c%c\n",ch1,ch2);
    // printf("n is %lld\n poz_ch1 is %lld\n", n, poz_ch1);
    return n - poz_ch1 - 1;
}

void solve(){
    string s;
    cin >> s;
    cout << min({steps(s,'5','0'), steps(s,'2','5'), steps(s,'0','0'), steps(s,'7','5')}) << endl;
}

int main(){
    // freopen("input.in", "r", stdin);
    int t;
    cin >> t;
    while(t--)
        solve();
}
