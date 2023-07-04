#include <bits/stdc++.h>

using namespace std;

int ask(int l, int r){
    printf("? %d ", r-l+1);
    for(int i = l; i <= r; i++){
        printf("%d ", i);
    }
    printf("\n");
    fflush(stdout);
    int ret;
    scanf("%d", &ret);
    return ret;
}

void solve(){
    int n; //trebuie sa fac sume partiale pe n
    cin >> n;
    vector<int> v(n+1), s(n+1, 0);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    s[1] = v[1];
    for(int i = 2; i <= n; i++){
        s[i] = s[i-1] + v[i]; //partiale
    }
    int l = 1, r = n;
    while(l < r){
        int mid = (l+r)/2;
        int ssl = ask(l, mid);
        if(s[mid] - s[l-1] != ssl){
            //se afla in stanga;
            //printf("going left\n");
            r = mid;
        }else{
            //printf("going right\n");
            l = mid+1;
        }
    }
    if(l==r){
        printf("! %d\n", l);
    }else{
        printf("We have a problem, sir\n");
    }
    fflush(stdout);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
