#include <iostream>

using namespace std;

#define ll long long

void setIO(){
    freopen("inp.txt", "r" ,stdin);
}
void solve(){
    int n,q,odd=0,even=0,x;
    ll sum = 0;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum+=x;
        if(x % 2)
            odd++;
        else
            even++;
    }
    for(int i = 0; i < q; i++){
        int type;
        cin >> type >> x;
        if(type == 0){
            sum += even * x;
            if(x % 2){
                odd += even;
                even = 0;
            }
        }else{
            sum += odd * x;
            if(x % 2){
                even += odd;
                odd=0;
            }
        }
        cout << sum << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
