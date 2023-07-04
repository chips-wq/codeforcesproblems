#include <bits/stdc++.h>
using namespace std; 

#define IO(NAME) \
        cin.tie(0)->sync_with_stdio(0); \
    if(fopen(NAME ".in","r")) freopen(NAME ".in","r",stdin), \
    freopen(NAME ".out","w",stdout); 

void solve(){
    int x,k;
    cin >> x >> k;
    if(x % k == 0){
        cout << 2 << endl << x-1 << " " << 1 << endl;
    }else{
        cout << 1 << endl << x << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
}
