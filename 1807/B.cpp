#include <iostream>

using namespace std;

void solve(){
    int n,x;
    cin >> n;
    int s0 = 0, s1 = 0;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x % 2 == 0){
            s0+=x;
        }else{
            s1+=x;
        }
    }
    if(s0 > s1){
        cout << "yes" << endl;
        return;
    }
    cout << "no" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
