#include <iostream>
#include <set>
#include <string>
using namespace std;

void replaceString(string& s , char c, int k){
	for(int i = 0; i < s.size();i++){
		if(s[i] <= c){
			if(k - (c-s[i]) < 0){
				s[i] = 'a';
			}else
				s[i] = s[i] - (k - (c - s[i]));
		}
	}
}
int main(){
	int n , k;
	//this is spaghetti and it's not working :)
	string s;
	cin >> n >> k >> s;
	set<char> arr;
	int i = 0;
	while(i < s.size() && s[i] == 'a'){
		i++;
	}
	char first_low = s[i];
	for(int j = i+1; j < s.size(); j++){
		if(s[j] > first_low){
			arr.insert(s[j]);
		}
	}
	if(arr.empty()){
		cout << first_low << endl;
		replaceString(s , first_low , k);
		cout << s << endl;
		return 0;
	}
	set<char>::iterator it = arr.begin();
	while(it != arr.end() && *it - k <= 'a'){
		it++;
	}
	it--;
	set<char>::iterator it2 = arr.begin();
	it2--;
	if(it == it2){
		cout << first_low << endl;
		replaceString(s , first_low , k);
		cout << s << endl;
		return 0;
	}
	cout << *it << endl;
	replaceString(s , *it , k);
	cout << s << endl;
}
