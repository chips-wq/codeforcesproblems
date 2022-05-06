#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	vector<char> v;
	string s;
	cin >> s;
	for (auto c : s){
		if(c!='+')
			v.push_back(c);
	}
	sort(v.begin(), v.end());
	for(auto it = v.begin(); it != v.end()-1; ++it){
		cout << *it << "+";
	}
	cout << v[v.size()-1] << endl;
}
