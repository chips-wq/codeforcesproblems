#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s(n,0);
    cin >> s;
    int a=0,b=0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'U'){
            b++;
        }else if(s[i] == 'D'){
            b--;
        }else if(s[i] == 'L'){
            a--;
        }else if(s[i] == 'R'){
            a++;
        }
        if(a == 1 && b == 1){
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
