#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s(n,0);
    cin >> s;
    int i = 0, j = s.size() - 1;
    while(i < j){
        if(s[i] - '0' + s[j] - '0' == 1){
            i++;
            j--;
        }else{
            break;
        }
    }
    int end = n - (j+1);
    int m = n - i;
    cout << m - end << endl;
    return;
}

int main(){
    //freopen("inp.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
        solve();
}
