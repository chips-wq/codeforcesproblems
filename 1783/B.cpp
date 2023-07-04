#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n*n);
    int i = n * n;
    int j = 1;
    for(int r = 0; r < v.size() - v.size() % 2; r+=2){
        v[r] = i;
        v[r+1] = j;
        i--;
        j++;
    }
    if(v.size() % 2){
        v[v.size()-1] = n * n / 2 + 1;
    }
    // for(i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // return;
    for(i = 0; i < n; i++){
        if(i % 2 == 0){
            for(j = i * n; j < (i+1) * n; j++){
                cout << v[j] << " ";
            }
        }else{
            for(j = (i+1) * n - 1; j >= i * n; j--){
                cout << v[j] << " ";
            }
        }
        cout << endl;
    }
}


int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
