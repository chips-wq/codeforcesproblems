#include <iostream>

using namespace std;

const int M = 2e5+1; // 1..2 * 10^5

int s[M];
void solve(){
    //ma intereseaza doar cate numere impare am in intervalul [a,b]
    int n,k,x,l,r,am;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> x;
        s[i] = s[i-1];
        if(x % 2 == 1){
            s[i]++;
        }
    }
    for(int i = 1; i <= k; i++){
        cin >> l >> r >> am;
        int odd_nums = s[l-1] - s[0] + s[n] - s[r];
        if(am % 2){
            odd_nums += r-l+1;
        }
        if(odd_nums % 2){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
