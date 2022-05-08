#include <iostream>
#include <string>

using namespace std;

bool solve(string s){
	//check first char
	int n = s.size();
	int num_r = 0 , num_b = 0;
	//if num_r is 0 and num_b > 0 then seq is invalid
	//you can use xor for this
	for(int i = 0; i < n; i++){
		if(s[i] == 'W'){
			if((num_r > 0) ^ (num_b > 0))
				return false;
			num_r = 0;
			num_b = 0;
			continue;
		}
		if(s[i] == 'B'){
			num_b++;
		}else
			num_r++;
	}
	if((num_r > 0) ^ (num_b > 0))
		return false;
	return true;
}
int main(){
	int t , n;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n;
		string s(n , 0);
		cin >> s;
		bool res = solve(s);
		if(res)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
		
	}
}

