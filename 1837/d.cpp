#include <bits/stdc++.h>
using namespace std; 

#define IO(NAME) \
        cin.tie(0)->sync_with_stdio(0); \
    if(fopen(NAME ".in","r")) freopen(NAME ".in","r",stdin), \
    freopen(NAME ".out","w",stdout); 

struct Sub{
    int len;
    int start,end;

    void print(){
        printf("len %d (%d,%d)\n", len, start, end);
    }

    bool operator<(const Sub &s) const {
        return len > s.len;
    }
};


void debug(multiset<Sub> &v){
    for(auto s : v)
        s.print();
    printf("\n");
}


void print_arr(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void solve(){
    int n;
    multiset<Sub> one,zero;
    cin >> n;
    vector<int> ans(n + 1);
    string s(n,0);
    cin >> s;
    int prev = 0;
    for(int i = 1; i < n; i++){
        if(s[i] != s[i-1]){
            if(s[i-1] == '('){ //type 0
                zero.insert({i-prev, prev, i});
            }else{
                one.insert({i-prev, prev, i});
            }
            prev = i;
        }
    }
    if(s[n-1] == '('){ //type 0
        zero.insert({n-prev, prev, n});
    }else{
        one.insert({n-prev, prev, n});
    }
    // printf("Type 0 (\n");
    // debug(zero);
    // printf("Type 1 )\n");
    // debug(one);
    int t = 0;
    while(!one.empty() && !zero.empty()){
        t++;
        multiset<Sub> *smaller = one.begin() -> len < zero.begin()->len ? &one : &zero;
        multiset<Sub> *bigger = one.begin() -> len > zero.begin()->len ? &one : &zero;
        // printf("here\n");
        if(smaller == bigger){
            ans[one.begin()->start] += t;
            ans[one.begin()->end] -= t;
            ans[zero.begin()->start] += t;
            ans[zero.begin()->end] -= t;
            one.erase(one.begin());
            zero.erase(zero.begin());
            // print_arr(ans);
            continue;
        }
        Sub b1 = *(bigger->begin());
        Sub b0 = *(smaller->begin());
        bigger->erase(bigger->begin());
        smaller->erase(smaller->begin());
        ans[b0.start] += t;
        ans[b0.end] -= t;
        ans[b1.end - b0.len] += t;
        ans[b1.end] -= t;
        Sub s1{b1.len - b0.len, b1.start, b1.end - b0.len};
        bigger->insert({b1.len - b0.len, b1.start, b1.end - b0.len});
        //printf("Am inserat in ala mai mare ");
        //s1.print();
        //printf("printing bigger \n");
        //debug(*bigger);
        //printf("dupa tot procesul\n");
        //debug(zero);
        //printf("\n");
        //debug(one);
        //print_arr(ans);
    }
    if(!(one.empty() && zero.empty())){
        cout << -1 << endl;
        return;
    }
    // printf("Priting ans pp\n");
    // for(int i = 0; i < n; i++){
    //     cout << ans[i] << " ";
    // }
    // cout << endl;
    for(int i = 1; i < n+1; i++){
        ans[i] += ans[i-1];
    }
    //printf("Priting ans pp\n");
    cout << t << endl;
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
}
