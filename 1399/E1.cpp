#include <bits/stdc++.h>

using namespace std;

void setIO(){
    freopen("input.in", "r", stdin);
    freopen("input.out", "w", stdout);
}

#define DEBUG
#define ll int

vector<vector<pair<int,int>>> tree;
vector<bool> visited;
vector<pair<int,int>> cnt; //associate lanturi din node si weight

struct weightInfluence{
    int weight;
    ll influence;
    int lcnt;
};

bool operator<(weightInfluence a, weightInfluence b){
    return a.influence > b.influence;
}

void dfs(int node, int parentToWeight = 0){
    visited[node] = 1;
    cnt[node].second = parentToWeight;
    bool leaf = 1;
    for(const auto& [child, weight] : tree[node]){
        if(visited[child] == 0){
            leaf = 0;
            dfs(child, weight);
            cnt[node].first += cnt[child].first;
        }
    }
    if(leaf){
        cnt[node].first = 1;
    }
}

void solve(){
    ll S, sum = 0;
    int n;
    cin >> n >> S;
    tree = vector<vector<pair<int,int>>>(n+1);
    visited = vector<bool>(n+1,0);
    cnt = vector<pair<int,int>>(n+1,{0,0});
    for(int i = 1; i <= n-1; i++){
        int x,y,w;
        cin >> x >> y >> w;
        tree[x].push_back({y,w});
        tree[y].push_back({x,w});
    }
    dfs(1);
    multiset<weightInfluence> ms;
    for(int i = 2; i < cnt.size(); i++){
        const auto& [lcnt , weight] = cnt[i];
        ll influence = 1ll * (weight/2 + weight % 2) * lcnt;
        sum += 1ll * weight * lcnt;
        weightInfluence nWI = {.weight = weight, .influence = influence, .lcnt=lcnt};
        ms.insert(nWI);
        //printf("cnt[%d] = {%d, %d}\n", i, lcnt, weight);
    }
    int times = 0;
    while(sum > S){
        times++;
        weightInfluence el = *ms.begin();
        sum -= el.influence;
        el.weight/=2;
        ll influence = 1ll * (el.weight/2 + el.weight % 2) * el.lcnt;
        el.influence = influence;
        ms.erase(ms.begin());
        ms.insert(el);
    }
    printf("%d\n", times);
    return;
    //for(auto w : ms){
        //printf("weight %d: %d\n", w.weight, w.influence);
    //}
}

int main(){
#ifdef DEBUG
    setIO();
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
