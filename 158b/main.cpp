#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
	unordered_map<int, int> d;
	int n ,x, total = 0;
 	cin >> n;
	for(int i = 0;i < n; i++){
		cin >> x;
		if (x == 4)
			total++;
		else
			d[x]++;
	}
	//look at d[3]
	total+=d[3];
	d[1] = max(0 , d[1] - d[3]);
	//look at d[2]
	total+=d[2]/2;
	d[2] = d[2]%2;
	if(d[2] == 1){
		total+=1;
		if(d[1] >= 2){
			d[1]-=2;
		}else{
			d[1] = 0;
		}
	}
	//look at d[1]
	total+=d[1]/4 + (d[1]%4 != 0);
	cout << total << endl;
}
