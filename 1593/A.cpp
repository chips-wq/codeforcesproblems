#include <bits/stdc++.h>

using namespace std;

int toWin(int i, vector<int> &v){
    int m = max(v[0],max(v[1],v[2]));
    if(m == v[i]){
        if(v[(i+1) % 3] == m || v[(i+2) % 3] == m){
            return 1;
        }
        return 0;
    }else{
        return m - v[i] + 1;
    }
}

void solve(){
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    for(int i = 0; i < v.size(); i++){
        cout << toWin(i,v) << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

