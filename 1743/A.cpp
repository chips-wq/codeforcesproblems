#include <iostream>

using namespace std;

void solve(){
    int n,x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
    }
    n = 10 - n;
    cout << 3*n*(n-1) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
