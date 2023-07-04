#include <bits/stdc++.h>

using namespace std;

//smenul lui mars

int sum_d(int n){
    int s0 = 0;
    while(n){
        s0 += n%10;
        n/=10;
    }
    return s0;
}
void solve(){
    int n,q, l, r, x, tmp;
    cin >> n >> q;
    vector<int> v(n + 1), smen(n+2), sp(n+2);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < q; i++){
        cin >> tmp;
        if(tmp == 1){
            cin >> l >> r;
            smen[l]++;
            smen[r+1]--;
        }else if(tmp == 2){
            cin >> x;
            sp[1] = smen[1];
            for(int j = 2; j <= n; j++){
                sp[j] = sp[j-1] + smen[j];
            }
            int am = sp[x];
            int cp = v[x];
            for(int k = 0; k < am; k++){
                cp = sum_d(cp);
            }
            cout << cp << endl;
        }
    }
}

int main(){
    //freopen("inp.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
        solve();
}
