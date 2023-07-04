#include <bits/stdc++.h>


using namespace std;

int main(){
    vector<int> a = {3,5,1,2,9};
    vector<int> v(a.size());
    iota(v.begin(), v.end(), 0);
    sort(v.begin(), v.end(), [&](int i, int j){return a[i] < a[j];});
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < v.size(); i++){
        cout << a[v[i]] << " ";
    }
    cout << endl;
}
