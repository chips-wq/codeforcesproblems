#include <iostream>

using namespace std;

int main(){
	int t , a, b, c , x, y;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> a >> b >> c >> x >> y;
		x = max(x - a , 0);
		y = max(y - b , 0);
		if(x + y > c){
			cout << "NO" << endl;
		}else
			cout << "YES" << endl;
	}
}

