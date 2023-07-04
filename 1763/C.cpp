#include <bits/stdc++.h>

using namespace std;

const int M = 2e5;

int v[M];

void solve(){
    int n,i,ma;
    cin >> n >> v[0];
    ma = v[0];
    for(i = 1; i < n; i++){
        cin >> v[i];
        ma = max(v[i], ma);
    }
    if(n == 2){
        cout << max(v[0]+v[1], abs(v[0]-v[1])*2) << endl;
    }else if(n == 3){
        if(v[0] == ma || v[2] == ma){
            cout << 1LL * 3 * ma << endl;
            return;
        }
        int mar = max(max(v[2], v[1]-v[0]),max(v[0],v[1]-v[2]));
        cout << max(1LL * v[0] + v[1] + v[2], 1LL * 3 * mar) << endl;
    }else{
        cout << 1LL * ma * n << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
