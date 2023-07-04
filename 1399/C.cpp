#include <bits/stdc++.h>

using namespace std;

int v[51];

void reset(){
    for(int i = 0; i < 51; i++)
        v[i] = 0;
}
void solve(){
    reset();
    int n,x,ans = -1;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        v[x]++;
    }
    for(int s = 2; s <= 2*n; s++){
        int cnt = 0;
        int r = s/2 - (s%2 == 0);
        for(int i = 1; i <= r; i++){
            //cout << "i is " << i << endl;
            //cout << "s-i is " << s-i << endl;
            if(s-i > n)
                continue;
            cnt += min(v[i], v[s-i]);
        }
        if(s % 2 == 0){
            cnt += v[s/2] / 2;
        }
        ans = max(ans,cnt);
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
