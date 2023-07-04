#include <iostream>

using namespace std;

void solve(){
    int l,r,x,a,b,cfg = -1;
    cin >> l >> r >> x >> a >> b;
    //pot ajunge direct ?
    if(a == b){
        cout << 0 << endl;
        return;
    }
    if(abs(a-b) >= x){
        cout << 1 << endl;
        return;
    }
    //din care colt pot ajunge la target
    if(abs(b-l) >= x){
        //pot ajunge de jos
        cfg = 0;
    }
    if(abs(b-r) >= x){
        //pot ajunge de sus
        cfg = 1;
    }
    if(abs(b-r) >= x && abs(b-l) >= x){
        //pot ajunge de oriunde
        cfg = 2;
    }
    if(cfg == -1){
        cout << -1 << endl;
        return;
    }
    if(max(abs(a-l),abs(a-r)) < x){
        cout << -1 << endl;
        return;
    }
    if(cfg == 0){
        if(abs(a-l) >= x){
            cout << 2 << endl;
            return;
        }
        cout << 3 << endl;
        return;
    }else if(cfg == 1){
        if(abs(a-r) >= x){
            cout << 2 << endl;
            return;
        }
        cout << 3 << endl;
        return;
    }else{
        cout << 2 << endl;
        return;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
