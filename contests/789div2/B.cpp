#include <iostream>
#include <string>

using namespace std;

void solve(string& s){
	int len = 1 , moves = 0;
	for(int i = 1; i < s.length();i++){
		if(s[i] == s[i-1]){
			len++;
		}
		else{
			
			if(len%2 == 1){
				moves++;
				i++;
			}
			len = 1;
		}
	}
	cout << moves << '\n';

}
int main(){
	int t , n;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n;
		string s(n , 0);
		cin >> s;
		solve(s);
	}
}
