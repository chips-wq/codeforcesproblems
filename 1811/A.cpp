#include <iostream>

using namespace std;

void solve(){
    int n,d;
    cin >> n >> d;
    string s(n,0);
    cin >> s;
    //cout << "the string is " << s << endl;
    if(d == 0){
        //cout << s << 0 << endl;
        //return;
    }
    int i = 0;
    while(i < s.size() && s[i] - '0' >= d){
        i++;
    }
    //cout << i << endl;
    s.insert(i, 1, d + '0');
    cout << s << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
