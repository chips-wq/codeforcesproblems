#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n%2){
        for(int i = 1; i <= n; i++){
            cout << 69 << " ";
        }
        cout << endl;
    }else{
        cout << 1 << " " << 3 << " ";
        for(int i = 1; i <= n-2; i++){
            cout << 2 << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
