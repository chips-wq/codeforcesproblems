#include <iostream>

using namespace std;

void solve(){
    int m,s,x,csum = 0;
    cin >> m >> s;
    for(int i = 0; i < m; i++){
        cin >> x;
        csum += x;
    }
    int poss = 2*(csum+s);
    int i = 1;
    int r = i*(i+1);
    while(r <= poss){
        if(r == poss){
            cout << "YES" << endl;
        }
        i++;
        r = i*(i+1);
    }
    cout << "NO" << endl;
}
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
