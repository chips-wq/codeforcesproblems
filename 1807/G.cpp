#include <bits/stdc++.h>

using namespace std;

// sum = 2
//1 1 2 5 7

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if(v[0] != 1){
        cout << "no" << endl;
        return;
    }
    long long sum = 1;
    for(int i = 1; i < v.size(); i++){
        if(v[i] > sum){
            cout << "no" << endl;
            return;
        }
        //v[i] <= sum
        sum += v[i];
    }
    cout << "yes" << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
