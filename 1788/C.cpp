#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    int k = n / 2;
    for(int i = 1; i <= k+1; i++){
        cout << i << " " << i + 3 * k + 1 << endl;
    }
    for(int i = k+2; i <= n; i++){
        cout << i << " " << i + k << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}


