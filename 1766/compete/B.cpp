#include <bits/stdc++.h>

using namespace std;

const int M = 2e5;

int v[M];
void solve(){
    int n,i;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    int small = 0, big = (int)2e9;
    i = 0;
    while(i < n-1 && small <= big){
        if(v[i] > v[i+1]){
            int ns = ceil(((float)v[i]+v[i+1])/2);
            small = max(ns,small);
        }else if(v[i] < v[i+1]){
            int nb = (v[i]+v[i+1])/2;
            big = min(nb,big);
        }
        i++;
    }
    if(small <= big){
        cout << small << endl;
        return;
    }
    cout << -1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
