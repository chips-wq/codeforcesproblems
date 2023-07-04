#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,x,ma,mi;
    cin >> n;
    cin >> x;
    ma = mi = x;
    for(int i = 1; i < n; i++){
        cin >> x;
        ma = (ma | x);
        mi = (mi & x);
    }
    cout << ma - mi << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}


