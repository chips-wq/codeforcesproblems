#include <bits/stdc++.h>

using namespace std;

#define int long long

const int M = (int)2e5+1;

int H[M];

void percolate(int i, int h[], int n){
    int el = h[i];
    while(i > 1 && el > H[i/2]){
        H[i] = H[i/2];
        i = i/2;
    }
    H[i] = el;
}

void add(int el, int h[], int &n){
    n++;
    h[n] = el;
    percolate(n, h, n);
}

void sift(int i, int h[], int n){
    int ss;
    do{
        ss = 0;
        if(2*i <= n && H[2*i] > H[i]){
            ss = 2*i;
        }
        if(2*i+1 <= n && H[2*i+1] > H[2*i] && H[2*i+1] > H[i]){
            ss = 2*i+1;
        }
        if(ss != 0){
            swap(H[ss], H[i]);
            i = ss;
        }
    }while(ss != 0);
}

void heap_sort(int h[], int n){
    while(n > 1){
        swap(h[1], h[n]);
        n--;
        sift(1,h,n);
    }
}

void solve(){
    int n,x, ss = 0, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x == 0 && ss > 0){
            ans += H[1];
            swap(H[1], H[ss]);
            ss--;
            sift(1,H,ss);
        }else{
            add(x, H, ss);
        }
    }
    cout << ans << '\n';
}

int32_t main(){
    // freopen("inp.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
        solve();
}
