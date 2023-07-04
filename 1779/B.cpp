#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n == 3){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    if(n % 2 == 1){
        int k = n / 2;
        int b = -1 * k;
        int a = k - 1;
        for(int i = 0; i < k; i++){
            cout << a << " " << b << " ";
        }
        cout << a << endl;
        return;
    }
    int r = 1;
    for(int i = 0; i < n; i++){
        cout << r << " ";
        r*= -1;
    }
    cout << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
