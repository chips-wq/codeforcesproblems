#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    multiset<int> m;
    for(int i = 0; i < v.size(); i++){
        int x = v[i];
        multiset<int>::iterator it = m.find(x-1);
        if(it != m.end()){
            m.erase(it);
        }
        m.insert(x);
    }
    cout << m.size() << endl;
}

int main(){
    // freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
        solve();
}
