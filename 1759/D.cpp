#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

void solve(){
    int n,cm=0, n2=0,n5=0;
    ll m,k=1;
    cin >> n >> m;
    int cpm = m, cpn = n;
    while(cpn % 2 == 0){
        cpn/=2;
        n2++;
    }
    while(cpn % 5 == 0){
        cpn/=5;
        n5++;
    }
    while(n2 < n5 && k * 2 <= m){
        n2++;
        k*=2;
    }
    while(n5 < n2 && k * 5 <= m){
        n5++;
        k*=5;
    }
    while(k * 10 <= m){
        k*=10;
    }
    int rest = floor(m / k);
    cout << k * rest * n << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
