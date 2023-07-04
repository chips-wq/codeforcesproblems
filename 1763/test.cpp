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

int main(){
    vector<monster> v;
    monster m = {.hp=3,.pow=5};
    monster m1= {.hp=3,.pow=5};
    v.push_back(m);
    v.push_back(m1);
    vector<monster>::iterator upper = upper_bound(v.begin(), v.end(), 3);
}
