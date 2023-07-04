#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, s1 = 0;
    cin >> n;
    vector<int> a(n+1), v(n + 1), dpl(n+2), dpr(n+2);
    for(int i = 1; i <= n; i++){
        cin >> a[i] >> v[i];
        s1+=a[i];
    }
    dpl[1] = v[1];
    for(int i = 2; i <= n; i++){
        dpl[i] = max(dpl[i-1], v[i]);
    }
    dpr[n] = v[n];
    for(int i = n-1; i >= 1; i--){
        dpr[i] = max(dpr[i+1], v[i]);
    }
    for(int i = 1; i <= n; i++){
        cout << 1LL * (s1-a[i]) * max(dpl[i-1], dpr[i+1]) << " ";
    }
    cout << endl;
}
