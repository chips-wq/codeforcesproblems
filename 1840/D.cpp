#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &el : v)
        cin >> el;
    sort(v.begin(), v.end());
    int l = -1, r = 1e9;
    while(l + 1 < r){
        int m = (l + r) >> 1;
        int i = 0; 
        while(i + 1 < n && v[i+1] - v[0] <= 2 * m){ //cat de rapid pot sa fac prima parte ? ( prefixul, fara sa folosesc mai mult timp decat m)
            i++;
        }
        int j = n-1;
        while(j - 1 >= 0 && v[n-1] - v[j-1] <= 2 * m){
            j--;
        }
        i++;//acum i si j vor vi pe segmentul din mijloc ( verific daca asta poate fi facut mai rapid decat in timp m
        j--;
        if(i > j || v[j] - v[i] <= 2*m){
            r = m;
        }else{
            l = m;
        }
    }
    //printf("(%d,%d)\n", l, r);
    cout << r << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
