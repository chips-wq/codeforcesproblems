#include <bits/stdc++.h>

using namespace std;

#define mod (int)(1e9 + 7)
#define ll long long

void solve(){
    ll n;
    cin >> n;
    ll s = 0;
    ll a = n, b = n + 1, c = 4 * n - 1;
    if(a % 6 == 0){
        a/=6;
        cout << ((a * b * c) * 2022) % mod<< endl;
        return;
    }
    if(b % 6 == 0){
        b/=6;
        cout << ((a * b * c) * 2022) % mod<< endl;
        return;
    }
    if(c % 6 == 0){
        c/=6;
        cout << ((a * b * c) * 2022) % mod<< endl;
        return;
    }
    if(a % 2 == 0){
        cout << "divided a by 2" << endl;
        a/=2;
        if(b % 3 == 0){
            b/=3;
        }else if(c % 3 == 0){
            cout << "divided c by 3 " << endl;
            c/=3;
        }
    }else if(b % 2 == 0){
        b/=2;
        if(a % 3 == 0){
            a/=3;
        }else if(c % 3 == 0){
            c/=3;
        }
    }else if(c % 2 == 0){
        c/=2;
        if(a % 3 == 0){
            a/=3;
        }else if(b % 3 == 0){
            b/=3;
        }
    }
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    cout << "c is " << c << endl;
    cout << ((a * b * c) * 2022) % mod << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
