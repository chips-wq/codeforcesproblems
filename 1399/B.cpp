#include <bits/stdc++.h>

using namespace std;

/*
 * 3 5 6 11
 * 3 2 3  3 
 *
 *
 * 2 8   -> 2 2
 * 7 23     7 17
 *  6 + 23 - 6 - 7
 */

#define ll long long
int a[50],b[50];


const int M = 2e9 + 1;
void solve(){
    int n, ma = M, mb = M;
    ll cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        ma = min(ma, a[i]);
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
        mb = min(mb, b[i]);
    }
    for(int i = 0; i < n; i++){
        cnt += max(a[i] - ma, b[i] - mb);
    }
    cout << cnt << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

}
