#include <iostream>
#include <map>

using namespace std;

int main(){
	map<long long , long long> m;
	long long n , r , avg;
	cin >> n >> r >> avg;
	long long needed = n*avg;
	for(int i = 0;i < n; i++){
		long long x , y;
		cin >> x >> y;
		needed-=x;
		if(m.find(y) == m.end()){
			m.insert({y,r-x});
		}else{
			auto found = m.find(y);
			found->second+=r-x;
		}
	}
	auto it = m.begin();
	long long cost = 0;
	while(needed > 0){
		if(needed - it->second <= 0){
			cost+=it->first * needed;	
			break;
		}
		needed-=it->second;
		cost+=it->first * it->second;
		it++;
	}
	cout << cost << endl;
}
