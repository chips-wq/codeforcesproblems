#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,m,x,y;
    cin >> n >> m;
    vector<pair<int,int>> segs(m);
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        segs[i] = {x,y};
    }
    int q;
    cin >> q;
    vector<int> changes(q);
    for(int &el : changes)
        cin >> el;
    int l = 1, r = q;
    while(l <= r){
        //printf("(%d,%d)\n", l , r);
        int mij = (l + r) >> 1;
        //printf("mij is now %d\n", mij);
        vector<int> pf(n+1, 0);
        bool ok = 0;
        for(int i = 0; i < mij; i++){
            pf[changes[i]] = 1;
        }
        //printf("Printing pf now\n");
        for(int i = 1; i <= n; i++){
            pf[i] += pf[i-1];
            //printf("%d ", pf[i]);
        }
        //printf("\n");
        for(int i = 0; i < m; i++){
            x = segs[i].first, y = segs[i].second;
            if(pf[y] - pf[x-1] > (y-x+1) / 2){
                ok = 1;
                break;
            }
        }
        if(ok){
            //if good
            r = mij - 1;
            //printf("This one was good, r is now %d\n", r);
        }
        else{ //(if bad)
            l = mij + 1;
            //printf("This one was good, l is now %d\n", l);
        }
    }
    if(l == q + 1){
        cout << -1 << endl;
    }else
        cout << l << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--)
        solve();
}
