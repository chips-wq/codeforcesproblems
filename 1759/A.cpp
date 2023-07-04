#include <iostream>
#include <cstring>

using namespace std;

char t[4] = "Yes";

int solve(){
    char s[51]; 
    int n = strlen(s);
    cin >> s;
    int first_index = -1;
    for(int i = 0; i < 3; i++){
        if(t[i] == s[0]){
            first_index = i;
        }
    }
    if(first_index == -1){
        cout << "NO" << endl;
        return 0;
    }
    for(int j = 0; j < strlen(s); j++){
        if(s[j] != t[first_index % 3]){
            cout << "NO" << endl;
            return 0;
        }
        first_index++;
    }
    cout << "YES" << endl;
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
