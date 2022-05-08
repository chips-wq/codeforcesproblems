#include <iostream>
#include <vector>

using namespace std;

void change(vector<int>& v){
	v[0] = 3234;
}
void show(vector<int>& v){
	for(auto x : v){
		cout << x << endl;
	}
}

int main(){
	vector<int> v = {1, 2 ,3};
	change(v);
	show(v);
}
