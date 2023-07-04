#include <bits/stdc++.h>

using namespace std;

void printm(vector<pair<int,int>> &v){
    printf("h:[ ");
    for(int i = 0; i < v.size(); i++){
        printf("%d ", v[i].first);
    }
    printf("]\n");
    printf("p:[ ");
    for(int i = 0; i < v.size(); i++){
        printf("%d ", v[i].second);
    }
    printf("]\n");
}

void print(vector<int> &v){
    printf("vector de minime\n");
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
void solve(){
    int n,ko,k;
    cin >> n >> ko;
    vector<pair<int,int>> v(n);
    vector<int> v_min(n);
    k = ko;
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
    }
    for(int i = 0; i < n; i++){
        cin >> v[i].second;
    }
    sort(v.begin(),v.end());
    v_min[n-1] = v[n-1].second;
    for(int i = n-2; i >= 0; i--){
        v_min[i] = min(v_min[i+1], v[i].second);//vector de minime
    }
    int k_prev;
    do{
        k_prev = k;
        //printf("k is %d\n", k);
        //print(v_min);
        //printm(v);
        vector<pair<int,int>>::iterator upper = upper_bound(v.begin(),v.end(), make_pair(k,(int)2e5+1));
        if(upper == v.end()){
            cout << "YES" << endl;
            return;
        }
        int index = upper - v.begin();
        //cout << "index is " << index << endl;
        ko-=v_min[index];
        k += ko;
    }while(k_prev < k);
    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
