#include <bits/stdc++.h>

using namespace std;

const int M = 1e7+1;

bool primes[M];

vector<int> prime_numbers;

void stivaEratostene(int n){
    memset(primes,1,sizeof(primes));
    for(int p = 2; p * p <= n; p++){
        if(primes[p] == 1){
            for(int i = p*p;i<=n;i+=p){
                primes[i] = 0;
            }
        }
    }
    for(int p = 2; p <= n; p++){
        if(primes[p])
            prime_numbers.push_back(p);
    }
}

void solve(){
    int a,b;
    cin >> a >> b;
    int m = min(a,b);
    if(gcd(a,b) != 1){
        cout << 0 << endl;
        return;
    }
    int i = 0;
    while(prime_numbers[i] <= m){
        int prime = prime_numbers[i];
        if(a % prime == b % prime){
            cout << prime - a % prime << endl;
            return;
        }
        i++;
    }
    cout << -1 << endl;
}


int main(){
    stivaEratostene(M);
    int t;
    cin >> t;
    while(t--)
        solve();
}
