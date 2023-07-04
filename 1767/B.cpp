#include <bits/stdc++.h>

using namespace std;

#define int long long
void solve(){
    int n,x;
    cin >> n >> x;
    vector<int> v(n-1);
    for(int i = 0; i < n-1; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++){
        if(x < v[i]){
            int m = x+v[i];
            x = m / 2 + m % 2;
        }
    }
    cout << x << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
