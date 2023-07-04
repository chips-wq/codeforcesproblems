#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> p(n);
    for(int i = 0; i < p.size(); i++){
        p[i] = i + 1;
    }
    swap(p[0], p[n-k]);
    for(int i = 0; i < p.size(); i++){
        cout << p[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}

