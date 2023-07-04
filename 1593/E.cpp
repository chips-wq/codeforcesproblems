#include <bits/stdc++.h>

using namespace std;

void dfs_leaf(int node, vector<bool> &visited, vector<int> &dp ,vector<vector<int>> &tree, int dist = 1){
    //call this from all leaves
    dp[node] = min(dp[node], dist);
    visited[node] = 1;
    for(int vv : tree[node]){
        if(visited[vv] == 0){
            dfs_leaf(vv, visited, dp, tree, dist + 1);
        }
    }
}

void solve(){
    int n,k,x,y;
    cin >> n >> k;
    vector<vector<int>> tree(n + 1);
    for(int i = 0; i < n-1; i++){
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    //how far am i from a leaf?? -> key to the problem
    vector<int> dp(n+1, (int)4e5 + 1);
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(tree[i].size() == 1){
            vector<bool> visited(n+1, 0);
            dfs_leaf(i, visited, dp, tree);
        }
    }
    for(int i = 1; i <= n; i++){
        if(dp[i] <= k){
            ans++;
        }
    }
    cout << n - ans << endl;

    cout << "dp array:" << endl;
    for(int i = 1; i <= n; i++){
        printf("[%d,%d]", i, dp[i]);
    }
    cout << endl;
}

int main(){
    freopen("smol.in", "r", stdin);
    freopen("output.out", "w", stdout);
    int t, i = 1;
    cin >> t;
    while(t--){
        if(i == 37){
            int n,k,x,y;
            cin >> n >> k;
            for(int i = 0; i < n-1 ; i++){
                cin >> x >> y;
                cout << x << y;
            }
            //n is 6
            //k is 2
            cout << endl;
        }else{
        solve();
        }
        i++;
    }
}
