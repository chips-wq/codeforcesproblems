#include <bits/stdc++.h>

using namespace std;

string PI = "314159265358979323846264338327950288419716939937510582097494459230781";

void solve(){
    string inp;
    cin >> inp;
    int i;
    for(i = 0; i < inp.size(); i++){
        if(inp[i] != PI[i]){
            break;
        }
    }
    cout << i << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
