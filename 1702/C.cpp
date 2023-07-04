#include <bits/stdc++.h>

using namespace std;

void solve(){
    map<int, pair<int,int>> m;
    int n,x,y,k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(m.find(x) == m.end()){
            m[x].first = i;
        }
        m[x].second = i;
    }
    for(int i = 0; i < k; i++){
        cin >> x >> y;
        auto f1 = m.find(x);
        auto f2 = m.find(y);
        if(f1 == m.end() || f2 == m.end() || f1->second.first > f2->second.second){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
