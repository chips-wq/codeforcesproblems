#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	vector<string> v;
	int n , x , y;
	cin >> n >> x >> y;
	bool sw = 0;
	if(x > y){
		swap(x,y);
		sw = 1;
	}
	int cx = x;
	int cy = y;

	while(x != y){
		if(x < y){
			v.push_back(sw == 1 ? "Vanya" : "Vova");
			x+=cx;
		}else{
			v.push_back(sw == 1 ? "Vova" : "Vanya");
			y+=cy;
		}
	}
	v.push_back("Both");
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		cout << v[(x-1) % v.size()] << endl;
	}
}


