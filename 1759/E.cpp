#include <iostream>
#include <algorithm>

using namespace std;
#define ll long long

const int M = 2e5;
int arr[] = {3,2,2};
int v[M];

int ss(int n, ll p){
    int ast = 0,i = 0,j=0;
    while(i < n){
        if(p > v[i]){
            ast++;
            p+= v[i]/2;
            i++;
        }else{
            if(j > 2){
                return ast;
            }
            p*=arr[j++];
        }
    }
    return ast;
}

void solve(){
    int n;
    ll h;
    cin >> n >> h;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    arr[0] = 3,arr[1]=2,arr[2]=2;
    sort(v,v+n);
    ll ans1 = ss(n,h);
    arr[0] = 2;
    arr[1] = 3;
    ll ans2 = ss(n,h);
    arr[1] = 2;
    arr[2] = 3;
    ll ans3 = ss(n,h);
    cout << max(ans1,max(ans2,ans3)) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
