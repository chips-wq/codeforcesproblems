#include <bits/stdc++.h>

using namespace std;

//#define DEBUG 1
#define MOD (int)1e10 + 7
#define ll long long

void print(set<int> s){
    for(auto el : s){
        cout << el << " ";
    }
    cout << endl;
}

void solve(){
    set<int> s1,s2;
    priority_queue<pair<int,int>> n1,n2;
    int n,x;

    cin >> n;
    vector<int> p1(n),p2(n);
    for(int i = 1; i <= n; i++){
        s1.insert(i);
        s2.insert(i);
    }
    bool ok = 1;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(ok){
            auto ss1 = s1.find(x);
            if(ss1 == s1.end()){
                auto ss2 = s2.find(x);
                if(ss2 == s2.end()){
                    ok = 0;
                }
                s2.erase(ss2);
                p2[i-1] = x;
                n1.push({x,i-1});
                //n1.insert({x,i});
            }else{
                //ia element din s1
                p1[i-1] = x;
                s1.erase(ss1);
                n2.push({x,i-1});
                //n2.insert({x,i});
            }
        }
    }
    if(ok == 0){
        cout << "NO" << endl;
        return;
    }
    while(!n1.empty()){
        int el = n1.top().first;
        int pos = n1.top().second;
        //printf("el is %d, and pos is %d\n", el, pos);
        auto els1 = upper_bound(s1.begin(), s1.end(), el);
        if(els1 == s1.begin()){
            cout << "NO" << endl;
            return;
        }
        els1 = prev(els1);
        p1[pos] = *els1;
        s1.erase(els1);
        n1.pop();
    }

    while(!n2.empty()){
        int el = n2.top().first;
        int pos = n2.top().second;
        //printf("el is %d, and pos is %d\n", el, pos);
        auto els2 = upper_bound(s2.begin(), s2.end(), el);
        if(els2 == s2.begin()){
            cout << "NO" << endl;
            return;
        }
        els2 = prev(els2);
        p2[pos] = *els2;
        s2.erase(els2);
        n2.pop();
    }
    cout << "YES" << endl;
    for(int i = 0; i < p1.size(); i++){
        cout << p1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < p2.size(); i++){
        cout << p2[i] << " ";
    }
    cout << endl;
    return;
    cout << "--sets--\n";
    print(s1);
    print(s2);
}

int main(){
    #ifdef DEBUG
    freopen("inp.txt", "r", stdin);
    #endif
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
