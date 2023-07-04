#include <bits/stdc++.h>

using namespace std;

//bad idea
int tree[51][51];
int n;

void print(multiset<int, greater<int>> &s){
    int sum = 0;
    cout << "[";
    for(auto i : s){
        sum+=i;
        cout << i << " ";
    }
    cout << "]" << " -> " << sum << endl;
    cout << '\n';
}
void print_set(set<int> s){
    cout << "[";
    for(auto i : s){
        cout << i << " ";
    }
    cout << "]";
    cout << endl;
}

void add_lant(stack<int> s, multiset<int,greater<int>> &ms){
    cout << "printing it " << endl;
    int prev = s.top();
    s.pop();
    while(!s.empty()){
        int cur = s.top();
        ms.insert(tree[cur][prev]);
        cout << tree[cur][prev] << " ";
        prev = cur;
        s.pop();
    }
    cout << endl;
}

void dfs(int node, stack<int> &lant, vector<bool> &been, multiset<int,greater<int>> &ms){
    //printf("node is %d", node);
    //print_set(tree[node]);
    been[node] = 1;
    lant.push(node);
    bool leaf = 1;
    for(int i = 1; i <= n; i++){
        //printf("tree[%d][%d] = %d\n", node, i, tree[node][i]);
        if(tree[node][i] != 0 && been[i] == 0){
            leaf = 0;
            dfs(i, lant, been, ms);
            lant.pop();
        }
    }
    if(leaf){
        add_lant(lant, ms);
    }
}

void reset(){
    for(int i = 0; i < 51; i++)
        for(int j = 0; j < 51; j++)
            tree[i][j] = 0;
}
void solve(){
    reset();
    int S,x,y,w,sum=0;
    cin >> n >> S;
    multiset<int,greater<int>> ms;
    for(int i = 0; i < n-1; i++){
        cin >> x >> y >> w;
        tree[x][y] = w;
        tree[y][x] = w;
    }
    stack<int> lant;
    vector<bool> been(n+1,0);
    dfs(1, lant,been, ms);
    printf("ms:\n");
    for(auto i : ms){
        sum+=i;
        cout << i << " ";
    }
    cout << endl;
    int cnt = 0;
    while(sum > S){
        cnt++;
        int el = *ms.begin();
        sum -= (el/2 + el % 2);
        el = el / 2;
        ms.erase(ms.begin());
        ms.insert(el);
        //print(ms);
    }
    cout << cnt << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
