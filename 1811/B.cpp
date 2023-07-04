#include <iostream>

using namespace std;

#define int long long

void mediate(int &cc, int n){
    if (cc > n/2){
        cc = n - cc + 1;
    }
}

void solve(){
    int n,x1,y1,x2,y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    mediate(x1, n);
    mediate(x2, n);
    mediate(y1, n);
    mediate(y2, n);
    cout << abs(min(x1,y1) - min(x2,y2)) << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
