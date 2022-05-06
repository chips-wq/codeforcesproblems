#include <iostream>

using namespace std;

typedef unsigned long long ull;
int main(){
	ull n , m , a;
	cin >> n >> m >> a;
	ull total = (n/a) * (m/a);
	if(n/a == 0 && m/a == 0){
		cout << 1 << endl;
		return 0;
	}
	if(n%a != 0){
		total+=m/a;
	}
	if(m%a != 0){
		total+=n/a;
	}
	if(n%a !=0 && m%a !=0)
		total++;
	cout << total << endl;
	return 0;

}
