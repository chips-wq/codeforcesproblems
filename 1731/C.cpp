#include <bits/stdc++.h>

using namespace std;

//#define DEBUG

int num_div_ok(int n){
    //verific daca e pp
    //(daca e patrat perfect are numar par de divizori)
    if(n <= 1){
        return 0;
    }
    if((int)sqrt(n) == sqrt(n)){
        return 0;
    }
    return 1;
}

void solve(){
    int n, x,ans = 0;
    cin >> n;
    vector<int> px(n+1);
    px[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> x;
        px[i] = (x ^ px[i-1]);
    }
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            int num = (px[j] ^ px[i-1]);
            ans += num_div_ok(num);
        }
    }
    cout << ans << endl;
}

int main(){
#ifdef DEBUG
    freopen("inp.in", "r", stdin);
#endif
    int t;
    cin >> t;
    while(t--)
        solve();
}
