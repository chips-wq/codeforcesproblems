#include <iostream>
#include <algorithm>

using namespace std;

const int M = 2e5;
int v[M];

void k_fix(int d, int k){
    //v is sorted in decreasing order
    int coins = 0;
    for(int i = 0; i < d; i++){
        coins+=v[i%k];
    }
    return coins;
}

void solve(){
    int n,c,d;
    cin >> n >> c >> d;
    int l = 0 , r = n;
    while(l <= r){
        int k = (l+r)/2;
        int ck = k_fix(d,k);
        if(ck > c){
            l = k;
        }else if(ck < c){
            r = k;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
