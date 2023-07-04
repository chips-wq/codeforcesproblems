#include <iostream>

using namespace std;

const int int_max = 1e9+1;
const int M = 2e5;

int v[M + 2];

void solve(){
    int n,valleys=0;
    cin >> n;
    v[n+1] = int_max;
    v[0] = int_max;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    for(int i = 1; i <= n; i++){
        if(v[i-1] > v[i]){
            int j = i+1;
            while(v[i] == v[j]){
                j++;
            }
            if(v[j-1] < v[j]){
                valleys++;
            }
        }
    }
    cout << (valleys == 1 ? "yes" : "no") << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
