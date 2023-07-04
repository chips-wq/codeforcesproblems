#include <bits/stdc++.h>

using namespace std;

#define mod (int)1e9 + 7

#define ll long long
#define ull unsigned long long

int main(){
    int n;
    while(1){
        cin >> n;
        if((int)sqrt(n) == sqrt(n)){
            printf("Este patrat perfect si sqrt(n) = %d\n", (int)sqrt(n));
        }else{
            printf("Nu este patrat perfect\n");
        }
    }
}
