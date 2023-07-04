#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int cif = 0;
    while(n > 9){
        cif++;
        n/=10;
    }
    cout << cif * 9 + n << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}


