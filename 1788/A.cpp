#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,t2 = 0,t1 = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 2){
            t2++;
        }
    }
    for(int i = 0; i < n; i++){
        if(v[i] == 2){
            t1++;
        }
        if(t2 - t1 == t1){
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

