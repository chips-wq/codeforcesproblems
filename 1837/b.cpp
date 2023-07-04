#include <bits/stdc++.h>
using namespace std; 

#define IO(NAME) \
        cin.tie(0)->sync_with_stdio(0); \
    if(fopen(NAME ".in","r")) freopen(NAME ".in","r",stdin), \
    freopen(NAME ".out","w",stdout); 

void up1(char c, int &mm0, int &mm1, int cur_len){
    if(c == '<'){
        mm1 = max(mm1, mm0 + cur_len);
    }else{
        mm0 = min(mm0, mm1 - cur_len);
    }
}
void solve(){
    int n;
    cin >> n;
    string s(n,0);
    cin >> s;
    //tine un interval deschis pe care il actualizezi
    int cur_len = 0, mm1 = 0, mm0 = 0; //[mm0,mm1]
    for(int i = 1; i < s.size(); i++){
        cur_len++;
        if(s[i] != s[i-1]){
            //secventa la s[i-1] are cur_len
            up1(s[i-1],mm0,mm1,cur_len);
            cur_len = 0;
        }
    }
    cur_len++;
    up1(s[s.size()-1],mm0,mm1,cur_len);
    cout << mm1 - mm0 + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
}
