#include <bits/stdc++.h>

using namespace std;

void solve(){
    vector<pair<int,int>> v(3);
    for(int i = 0; i < 3; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());
    do{
        if(v[0].first == v[1].first && v[0].second == v[2].second){
            cout << "NO" << endl;
            return;
        }
    }while(next_permutation(v.begin(),v.end()));
    cout << "YES" << endl;
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
