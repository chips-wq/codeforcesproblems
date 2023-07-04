#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> g;

bool ok;

void dfs(int node, vector<vector<int>> &g, vector<int> &v, int group = 1){
    v[node] = group;
    for(int nn : g[node]){
        if(v[nn] == group){
            //not bipartite
            ok = 0;
        }
        if(v[nn] == 0){
            dfs(nn, g, v, group == 1 ? 2 : 1);
        }
    }
}

void solve(){
    int n,x,y;
    ok = 1;
    cin >> n;
    g = vector<vector<int>>(n+1);
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
        if(x == y || g[x].size() > 2 || g[y].size() > 2){
            ok = 0;
        }
    }
    vector<int> v(n+1);
    for(int i = 1; ok && i <= n; i++){
        if(v[i] != 0){
            continue;
        }
        dfs(i,g,v);
    }
    cout << (ok ? "YES" : "NO") << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
