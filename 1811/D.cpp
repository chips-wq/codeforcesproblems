#include <bits/stdc++.h>

using namespace std;

int fib[46];

bool reflect(int i, int j, int n){
    int h = fib[n];
    int w = fib[n+1];
    //printf("h: %d\n, w: %d\n", h, w);
    if(i >= 1 && i <= h && j >= 1 && j <= w){
        //ok
    }else{
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int oh = fib[n-1];
    if(j > oh){
        //reflect
        j -= h;
    }
    //printf("(%d,%d)\n", j, i);
    return reflect(j, i, n-1);
}

void solve(){
    int n,x,y;
    cin >> n >> x >> y;
    bool ans = reflect(x,y,n);
    if(ans){
        cout << "yes" << endl;
        return;
    }
    cout << "no" << endl;
}

int main(){
    fib[0] = 1;
    fib[1] = 1;
    for(int i = 2; i < 46; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
