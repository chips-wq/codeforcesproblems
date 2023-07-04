#include <bits/stdc++.h>

using namespace std;

void setIO(){
    freopen("test.inp", "r", stdin);
}

void solve(){
    int n,k,x,y;
    cin >> n >> k;
    vector<int> v(51, 0);
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(x <= k && k <= y){
            for(int j = x; j <= y; j++){
                v[j]++;
            }
        }
    }
    int mm = v[1];
    int mm_cnt = 1;
    for(int i = 2; i <= 50; i++){
        if(v[i] > mm){
            mm = v[i];
            mm_cnt = 1;
        }else if(v[i] == mm){
            mm_cnt++;
        }
    }
    if(mm_cnt == 1 && mm == v[k]){
        cout << "yes" << endl;
        return;
    }
    cout << "no" << endl;
}

int main(){
    //setIO();
    int t;
    cin >> t;
    while(t--)
        solve();
}
