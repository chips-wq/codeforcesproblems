#include <bits/stdc++.h>

using namespace std;

//topological sort problem

void solve(){
    int n,k,x,y;
    cin >> n >> k;

    vector<vector<int>> tree(n + 1);
    for(int i = 0; i < n-1; i++){
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }

    vector<int> neighs(n+1);
    vector<int> ops(n+1);
    queue<int> q;
    for(int i = 1; i <= n; i++){
        neighs[i] = tree[i].size();
        if(neighs[i] == 1){
            q.push(i);
        }
    }

    int op = 1;
    while(!q.empty()){
        int qsize = q.size();
        while(qsize--){
            int vv = q.front();
            ops[vv] = op;
            q.pop();
            for(int node : tree[vv]){
                neighs[node]--;
                if(neighs[node] == 1){
                    q.push(node);
                }
            }
        }
        op++;
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(ops[i] <= k){
            ans++;
        }
        // printf("To take out %d, it takes %d\n", i, ops[i]);
    }
    cout << n - ans << endl;
}

int main(){
    // freopen("smol.in", "r", stdin);
    int t;
    cin >> t;
    while(t--)
        solve();
}
