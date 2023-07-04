#include <bits/stdc++.h>

using namespace std;

void print(vector<int>& t){
    for(int i = 0; i < t.size(); i++){
        cout << t[i] << " ";
    }
    cout << endl;
}

vector<int> generate_r(int r, int n, int k){
    vector<int> t;
    int j = 1;
    int nr = 1;
    for(int i = 1; i <= r; i++){
        t.push_back(nr);
        nr+=j;
        j++;
    }
    int last = *t.rbegin();
    last++;
    for(int i = 1; i <= k - r; i++){
        t.push_back(last);
        last++;
    }
    last--;
    if(last > n){
        return generate_r(r-1, n, k);
    }
    return t;
}

void solve(){
    int r,n,k;
    cin >> k >> n;
    int d = n-k;
    r = 3 + floor(sqrt(8*d+1));
    r = ceil(((float)r)/2);
    if(r > k){
        r=k;
    }
    vector<int> t = generate_r(r,n,k);
    print(t);
}


int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
