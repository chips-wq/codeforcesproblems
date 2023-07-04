#include <bits/stdc++.h>

using namespace std;

#define ll long long
void solve(){
    ll n,x;
    ll p = 1;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> x;
        p *= x;
    }
    p += n - 1;
    cout << p * 2022 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
