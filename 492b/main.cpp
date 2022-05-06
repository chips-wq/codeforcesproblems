#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef double ld;
int main(){
	int n , l;
	cin >> n >> l;
	vector<int> lights(n , 0);
	for(int i = 0;i < n;i++){
		cin >> lights[i];
	}
	sort(lights.begin() , lights.end());
	ld d;
	d = lights[0];
	for(int i = 0;i < n-1;i++){
		ld t = ((ld)lights[i+1] - lights[i])/2;
		d = max(t , d);
	}
	d = max((ld)l - lights[lights.size()-1] , d);
	printf("%f\n" , d);
}
		
