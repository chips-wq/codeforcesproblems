#include <bits/stdc++.h>

using namespace std;

const int M = 2e5;

bool a[2][M];
int n,totalSum;

bool dfs(int i, int j, int sum = 0){
    //printf("inside dfs: (%d,%d)\n", i, j);
    sum++;
    int ok = 0;
    a[i][j] = 0;
    if(i == 1 && a[0][j] == 1){
        ok = ok || dfs(0,j, sum);
    }
    if(i == 0 && a[1][j] == 1){
        ok = ok || dfs(1,j, sum);
    }
    if(j < n - 1 && a[i][j+1] == 1){
        ok = ok || dfs(i,j+1, sum);
    }
    a[i][j] = 1;
    if(sum == totalSum)
        ok = 1;
    return ok;
}

void solve(){
    totalSum = 0;
    cin >> n;
    int ok = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            char x;
            cin >> x;
            a[i][j] = x == 'W' ? 0 : 1;
            totalSum+=a[i][j];
        }
    }
    for(int j = 0; j < n; j++){
        if(a[0][j] || a[1][j]){
            if(a[0][j]){
                ok = ok || dfs(0,j);
            }
            if(a[1][j]){
                ok = ok || dfs(1,j);
            }
            break;
        }
    }
    cout << (ok == 1 ? "yes" : "no") << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
