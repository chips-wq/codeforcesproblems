#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    bool f = 1;
    for(int i = 1; i < n; i++){
        if(v[i] - v[i-1] > 1){
            f = 0;
        }
    }
    if(f)
        cout << "YES";
    else cout << "NO";
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
