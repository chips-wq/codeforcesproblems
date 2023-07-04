#include <bits/stdc++.h>

using namespace std;

void destruct(vector<int>& v, int n){
    int more = n - v.size();
    int aux = v[v.size()-1];
    for(int i = 0; i < min(more, aux); i++){
        cout << 1 << " ";
    }
    v.pop_back();
    if(aux > more){
        for(auto &i : v)
            cout << i << " ";
        cout << aux - more << " ";
        cout << endl;
    }else{
        destruct(v, n - aux);
    }
}

void solve(){
    int n,s,r;
    cin >> n >> s >> r;
    vector<int> v;
    int d = s-r;
    while(s != 0){
        while(s-d < 0){
            d--;
        }
        v.push_back(d);
        s-=d;
    }
    if(v.size() < n){
        destruct(v, n);
    }else{
        for(auto &i : v){
            cout << i << " ";
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
