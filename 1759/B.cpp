#include <iostream>
#include <cmath>

using namespace std;

void solve(){
    int m,s,x,csum = 0,mb;
    cin >> m >> s >> mb;
    csum+=mb;
    for(int i = 1; i < m; i++){
        cin >> x;
        csum += x;
        mb = max(x,mb);
    }
    double rdelta = sqrt(1+8*(csum+s));
    if(rdelta == (int)rdelta && (int)rdelta % 2 == 1 && mb <= rdelta && m <= rdelta){
        int n = ((int)rdelta-1)/2;
        if(mb <= n && m <= n){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
