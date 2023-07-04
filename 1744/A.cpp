#include <iostream>
#include <string>

char map[51];

using namespace std;

void clear(){
    for(int i = 0; i < 51; i++){
        map[i] = 0;
    }
}

void solve(){
    clear();
    int n;
    int v[50];
    cin >> n;
    string s(n,0);
    for(int i = 0; i < n ; i++){
        cin >> v[i];
    }
    cin >> s;
    for(int i = 0; i < n; i++){
        if(map[v[i]] == 0){
            map[v[i]] = s[i];
        }
        v[i] = map[v[i]];
        if(v[i] != s[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
