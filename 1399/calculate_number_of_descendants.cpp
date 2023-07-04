#include <bits/stdc++.h>

//#define CASES
//#define DEBUG
//#define nmax (int)1e5

using namespace std;

const int nmax = 1000;

int a[nmax][nmax];
int cnt[nmax];
bool visited[nmax];

int n;

void setIO(){
    freopen("input.in", "r", stdin);
    freopen("input.out", "w", stdout);
}

void dfs(int node){
    visited[node] = 1;
    printf("now on node %d\n", node);
    bool leaf = 1;
    for(int i = 1; i <= n; i++){
        if(a[node][i] > 0 && visited[i] == 0){
            leaf = 0;
            dfs(i);
            cnt[node] += cnt[i];
        }
    }
    if(leaf){
        cnt[node] = 1;
    }
}

void solve(){
    int x,y,w;
    cin >> n;
    for(int i = 1; i <= n-1; i++){
        cin >> x >> y >> w;
        a[x][y] = a[y][x] = w;
    }
    dfs(1);
    for(int i = 1; i <= n; i++){
        printf("count[%d] is %d\n", i, cnt[i]);
    }
    cout << "end" << endl;
}

int main(){
    #ifdef DEBUG
    setIO();
    #endif 
    int t = 1;
    #ifdef CASES
    cin >> t;
    #endif
    while(t--)
        solve();
}
