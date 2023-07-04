#include <bits/stdc++.h>

using namespace std;

void dfs(int i, int prev, vector<int>& dp, vector<vector<int>> &g){
    bool isLeaf = 1;
    for(auto nei : g[i]){
        if(nei != prev){
            dfs(nei, i, dp, g);
            isLeaf = 0;
            dp[i] += dp[nei];
        }
    }
    if(isLeaf)
        dp[i] = 1;
}

void solve(){
    int n,x,y;
    cin >> n;
    vector<vector<int>> g(n + 1, vector<int>());
    vector<int> dp(n+1, 0);
    for(int i = 0; i < n-1; i++){
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1, -1, dp, g);
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> x >> y;
        cout << 1LL * dp[x] * dp[y] << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}

