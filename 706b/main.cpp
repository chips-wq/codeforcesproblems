#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n , q , x , nr;
	cin >> n;
	vector<int> v;
	for (int i = 0;i < n; i++){
		cin >> x;
		v.push_back(x);
	}
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> x;
		nr = 0;
		for(int j = 0;j < n;j++){
			if(x >= v[j])
				nr++;
		}
		cout << nr << endl;
	}
}

