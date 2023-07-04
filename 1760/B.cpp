#include <iostream>
#include <string>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s(n,0);
    cin >> s;
    char m = s[0];
    for(int i = 0; i < s.size(); i++){
        m = max(m,s[i]);
    }
    cout << m - 'a' + 1 << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}

