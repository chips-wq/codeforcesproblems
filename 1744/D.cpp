#include <iostream>
#include <set>

using namespace std;

void solve(){
    multiset<int, greater<int>> s;
    int n,db,steps,x,ci;
    cin >> n;
    db = n;
    for(int i = 0; i < n; i++){
        ci = i + 1;
        cin >> x;
        while(x % 2 == 0){
            db--;
            x/=2;
        }
        int cnt = 0;
        while(ci % 2 == 0){
            cnt++;
            ci/=2;
        }
        if(cnt)
            s.insert(cnt);
    }
    auto e = s.begin();
    steps = 0;
    while(db > 0 && e != s.end()){
        int el = *e;
        db -= el;
        e++;
        steps++;
    }
    if(db > 0){
        steps = -1;
    }
    cout << steps << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
