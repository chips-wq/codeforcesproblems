#include <iostream>
#include <string>

using namespace std;

void setIO(){
    freopen("test.inp", "r", stdin);
}
void solve(){
    int n,m;
    cin >> n >> m;
    string s1(n,0);
    string s2(m,0);
    cin >> s1 >> s2;
    int tt = 0;
    for(int i = 0; i < n - 1; i++){
        if(s1[i] == s1[i+1]){
            tt++;
        }
    }
    for(int i = 0; i < m - 1; i++){
        if(s2[i] == s2[i+1]){
            tt++;
        }
    }
    if(tt > 1 || (tt == 1 && s1[n-1] == s2[m-1])){
        cout << "no" << endl;
        return;
    }
    cout << "yes" << endl;
    return;
}

int main(){
    //setIO();
    int t;
    cin >> t;
    while(t--)
        solve();
}
