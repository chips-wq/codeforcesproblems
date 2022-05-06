#include <iostream>
using namespace std;

int main(){
	char c;
	int n , x = 0;
 	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> c >> c;
		if (c == '+'){
			x++;
		}else
			x--;
		cin >> c;
	}
	cout << x;
}
