#include <bits/stdc++.h>

using namespace std;

void solve(int test){
    string s = "meow";
    int v[4] = {0,0,0,0};
    int n;
    cin >> n;
    string t(n,0);
    cin >> t;
    for(int i = 0; i < t.size(); i++){
        t[i] = tolower(t[i]);
        if(t[i] == 'm'){
            v[0]++;
        }
        else if(t[i] == 'e'){
            v[1]++;
        }
        else if(t[i] == 'o'){
            v[2]++;
        }
        else if(t[i] == 'w'){
            v[3]++;
        }else{
            cout << "NO" << endl;
            return;
        }
    }
    for(int i = 0; i < 4; i++){
        if(v[i] == 0){
            cout << "NO" << endl;
            return;
        }
    }
    for(int i = 1; i < t.size(); i++){
        if(t[i] != t[i-1]){
            string diff = string() + t[i-1] + t[i];
            if(s.find(diff) == string::npos){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    return;
}

void setIO(){
    freopen("inp.txt", "r", stdin);
}

int main(){
    // setIO();
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve(i);
    }
}
