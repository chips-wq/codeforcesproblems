#include <bits/stdc++.h>

using namespace std;

class monster{
    public:
        int hp;
        int pow;
        bool operator <(const monster &m){
            return hp < m.hp; 
        }
        bool operator ==(const monster &m){
            return hp == m.hp;
        }
        bool operator >(const monster &m){
            return hp > m.hp;
        }
    
};

bool operator< (const int n, monster m){
    return n < m.hp;
}

void print(vector<monster> &v){
    printf("h:[ ");
    for(int i = 0; i < v.size(); i++){
        printf("%d ", v[i].hp);
    }
    printf("]\n");
    printf("p:[ ");
    for(int i = 0; i < v.size(); i++){
        printf("%d ", v[i].pow);
    }
    printf("]\n");
}

bool step(int &k, int &weak, vector<monster> &v){
    //returns whether it is over or not
    //printf("Begin step:\n, k is %d\n", k);
    //print(v);
    vector<monster>::iterator upper = upper_bound(v.begin(),v.end(),k);
    //printf("Upper index is %d\n", upper - v.begin());
    if(upper == v.end()){
        return 1;
    }
    //printf("Removing the elements..\n");
    v.erase(v.begin(), upper);
    weak = v.begin()->pow;
    for(vector<monster>::iterator it = v.begin(); it != v.end(); it++){
        it->hp -= k;
        weak = min(weak, it->pow);
    }
    k-=weak;
    //printf("End step:\n");
    //print(v);
    return 0;
}

void solve(){
    vector<monster> v;
    int n,k,weak;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        monster m;
        cin >> m.hp;
        v.push_back(m);
    }
    for(int i = 0; i < n; i++){
        int pow;
        cin >> pow;
        v[i].pow = pow;
    }
    sort(v.begin(),v.end());
    print(v);
    while(!step(k,weak,v)){
        if(k <= 0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}


