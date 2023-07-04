#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s(n,0);
    cin >> s;
    vector<pair<int,char>> v;
    vector<int> map(n);
    for(int i = 0; i < n; i++){
        bool found = 0;
        for(int j = 0; j < v.size() && !found; j++){
            if(v[j].second == s[i]){
                map[i] = j;
                v[j].second = v[j].second == '1' ? '0' : '1';
                v[j].first++;
                found = 1;
            }
        }
        if(found == 0){
            v.push_back(make_pair(1, s[i] == '1' ? '0' : '1'));
            map[i] = v.size()-1;
        }
    }
    cout << v.size() << endl;
    for(int r = 0;r < map.size(); r++){
        cout << map[r] + 1 << " ";
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
