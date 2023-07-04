#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s(n,0);
    cin >> s;
    vector<int> v;
    map<bool, set<int>> m;
    vector<int> map(n);
    for(int i = 0; i < n; i++){
        set<int>* c = &m[s[i]-'0'];
        set<int>* nc = &m[!(s[i]-'0')];
        if(!c->empty()){
            int index = *(c->begin());
            v[index]++;
            map[i] = index;
            c->erase(c->begin());
            nc->insert(index);
        }else{
            v.push_back(1);
            map[i] = v.size()-1;
            nc->insert(v.size()-1);
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
