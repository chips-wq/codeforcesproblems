#include <iostream>

using namespace std;

int main(){
	int n , b = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int f , r = 0;
		for(int j = 0; j < 3; j++){
			cin >> f;
			r+=f;
		}
		if (r>=2){
			b++;
		}
	}
	cout << b << endl;
}
