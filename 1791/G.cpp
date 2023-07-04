#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,c;
    cin >> n;
    cin >> c;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        v[i] += i + 1;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        if(c >= v[i]){
            c-=v[i];
        }else{
            cout << i << endl;
            return;
        }
    }
    cout << n << endl;
    return;
}

int main(){
    freopen("inp4.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
        solve();
}
