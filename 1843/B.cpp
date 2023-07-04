#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    long long sum = 0;
    int ans = 0;
    bool ok = 0;
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
        sum += abs(v[i]);
        if(v[i] < 0){
            ok = 1;
        }
    }
    bool zero = 0, neg = 0;
    if(v[0] < 0)
        neg = 1;
    else if(v[0] == 0) zero = 1;
    for(int i = 1; i < n; i++){
        if(v[i] > 0){
            if(neg){
                ans++;
                zero = 0;
                neg = 0;
            }
        }else if(v[i] == 0){
            zero = 1;
        }else{
            neg = 1;
        }
    }
    if(neg)
        ans++;
    cout << sum << " " << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}

