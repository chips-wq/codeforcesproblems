#include <iostream>

const int M = 2e5+1;
int v[M];

using namespace std;

long long calculate(int n){
    long long sum = 0;
    long long z = 0;
    for(int i=n;i >= 1; i--){
        if(v[i] == 0){
            z++;
        }else{
            sum+=z; 
        }
    }
    return sum;
}
void solve(){
    int n,i;
    long long f,s=-1,t=-1;
    cin >> n;
    for(i = 1; i <= n; i++){
        cin >> v[i];
    }
    f = calculate(n);
    for(i = 1; i <= n; i++){
        if(v[i] == 0){
            v[i] = 1;
            s = calculate(n);
            v[i] = 0;
            break;
        }
    }
    for(i = n; i >= 1; i--){
        if(v[i] == 1){
            v[i] = 0;
            t = calculate(n);
            v[i] = 1;
            break;
        }
    }
    cout << max(t,max(f,s)) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
