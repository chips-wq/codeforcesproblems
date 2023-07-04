#include <bits/stdc++.h>

using namespace std;

void solve(){
    bool sw = 1; 
    int n,x = 0,y = 0, p = 1;
    cin >> n;
    while(n){
        int c = n % 10;
        if(c % 2 == 0){
            x += p * (c/2);
            y += p * (c/2);
        }else{
            int b = c/2+1;
            int s = c/2;
            if(sw){
                x += p * b;
                y += p * s;
            }else{
                x += p * s;
                y += p * b;
            }
            sw = !sw;
        }
        p*=10;
        n/=10;
    }
    cout << x << " " << y << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}


