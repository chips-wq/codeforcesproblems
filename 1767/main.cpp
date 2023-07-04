#include <bits/stdc++.h>

using namespace std;

int side_sq(int x1, int y1, int x2, int y2){
    return (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2);
}

void solve(){
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int l1 = side_sq(x1,y1,x2,y2);
    int l2 = side_sq(x1,y1,x3,y3);
    int l3 = side_sq(x2,y2,x3,y3);
    if(l1 + l2 == l3 || l1 + l3 == l2 || l2 + l3 == l1){
        //right triangle
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
