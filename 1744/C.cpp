#include <iostream>
#include <string>
using namespace std;

void solve(){
    int n,lc = -1,lmax = 0;
    char c;
    cin >> n >> c;
    string s(n,0);
    cin >> s;
    if(c == 'g'){
        cout << 0 << endl;
        return;
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'g' && lc != -1){
            lmax = max(lmax, i-lc);
            lc = -1;
        }
        if(s[i] == c && lc == -1){
            lc = i;
        }
    }
    if(lc != -1){
        int i = 0;
        while(s[i] != 'g'){
            i++;
        }
        lmax = max(lmax, n-(lc-i));
    }
    cout << lmax << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
