#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t,v[3];
    cin >> t;
    while(t--){
        cin >> v[0] >> v[1] >> v[2];
        sort(v,v+3);
        cout << v[1] << endl;
    }
}
