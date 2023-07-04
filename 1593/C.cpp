/*
    4 4 5 7 8 9
    cat -> 0

    4 4 5 7 8
    cat -> 1

    4 4 5 7
    cat -> 3

    4 4 5
    cat -> 6
*/
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k,cat = 0, ans = 0;
    cin >> n >> k;
    vector<int> v(k);
    for(auto &i : v){
        cin >> i;
    }
    sort(v.begin(), v.end());
    while(1){
        vector<int>::iterator it = upper_bound(v.begin(), v.end(), cat);
        if(it == v.end() || v.empty()){
            cout << ans << endl;
            return;
        }
        int last = *v.rbegin();
        cat += n - last;
        ans++;
        v.pop_back();
    }

}
int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}

