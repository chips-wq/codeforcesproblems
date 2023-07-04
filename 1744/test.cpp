#include <iostream>
#include <set>

using namespace std;

int main(){
    int n,x;
    multiset<int, greater<int>> s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        s.insert(x);
    }
    cout << "The elements of the set are:\n";
    for(auto el : s){
        cout << el << " ";
    }
    cout << endl;
}
