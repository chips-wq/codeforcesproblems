#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n;
    cin >> n;
    double sqr = sqrt(n);
    if(sqr == (int) sqr){
        cout << "este patrat perfect\n";
    }else{
        cout << "nu este patrat perfect\n";
    }

}
