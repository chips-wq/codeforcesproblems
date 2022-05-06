#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	string s , b;
	cin >> s >> b;
	transform(s.begin() , s.end() , s.begin() , ::tolower);
	transform(b.begin() , b.end() , b.begin() , ::tolower);
	int comp = s.compare(b);
	if(comp < 0)
		cout << -1 << endl;
	else if(comp > 0)
		cout << 1 << endl;
	else cout << 0 << endl;
}
