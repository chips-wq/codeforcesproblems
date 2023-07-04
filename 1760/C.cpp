#include <iostream>

using namespace std;

const int M = 2e5;

int v[M];

void solve(){
    int n,i,a,b;
    cin >> n >> v[0] >> v[1];
    b = max(v[0],v[1]);
    a = min(v[0], v[1]);
    for(i = 2; i < n; i++){
        cin >> v[i];
        if(v[i] > b){
            a=b;
            b=v[i];
        }else if(v[i] > a){
            a = v[i];
        }
    }
    for(i = 0; i < n; i++){
        if(v[i] != b){
            cout << v[i] - b << " ";
        }else{
            cout << v[i] - a << " ";
        }
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
