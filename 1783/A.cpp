#include <bits/stdc++.h>

using namespace std;

/*
* 6 6 6
* 7 6 5 1
*
*/

void solve(){
    int n;
    bool ok = 0;
    cin >> n;
    vector<int> v(n);
    cin >> v[0];
    for(int i = 1; i < n; i++){
        cin >> v[i];
        if(v[i] != v[0]){
            ok = 1;
        }
    }
    if(ok == 0){
        cout << "NO" << endl;
        return;
    }
    sort(v.begin(), v.end(), greater<int>());
    swap(v[1], v[n-1]);
    cout << "YES" << endl;
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
