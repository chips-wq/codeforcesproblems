#include <bits/stdc++.h>

using namespace std;

#define ll long long
void solve(){
    ll sum = 0;
    int n,m,x;
    cin >> n >> m;
    multiset<int> a;
    for(int i = 0; i < n; i++){
        cin >> x;
        a.insert(x);
    }
    for(int j = 0; j < m; j++){
        cin >> x;
        a.erase(a.begin());
        a.insert(x);
    }
    for(int nr : a){
        sum += nr;
    }
    cout << sum << endl;
}

int main(){
    //freopen("debug.in", "r", stdin);
    int t;
    cin >> t;
    while(t--)
        solve();
}
