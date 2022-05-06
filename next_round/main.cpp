#include <iostream>

using namespace std;

int main(){
	int n , k , r , kv = 1 , nr = 0;
 	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> r;
		if (r >= kv)
			nr++;
		else
			break;
		if (i+1 == k)
			kv = r;
	}
	cout << nr << endl;
}
