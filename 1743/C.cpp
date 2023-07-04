#include <iostream>
#include <string>

using namespace std;

const int M = 2e5;

int v[M];

void solve(){
    int n,sum = 0, l0 = 0,dmax=0;
    cin >> n;
    string lids(n,0);
    cin >> lids;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        if(lids[i] == '0'){
            sum += dmax; 
            dmax = 0;
            l0 = v[i]; 
        }else{
            sum += v[i];
            dmax = max(dmax, l0 - v[i]);
        }
    }
    sum += dmax; 
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
