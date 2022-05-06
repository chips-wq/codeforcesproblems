#include <iostream>
#include <map>

using namespace std;

int main(){
	map<int , int> m;
	int n , r , avg;
	cin >> n >> r >> avg;
	int needed = n*avg;
	for(int i = 0;i < n; i++){
		int x , y;
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
	int cost = 0;
	while(needed > 0){
		if(it->second == 0){
			it++;
		}
		needed-=1;
		cost+=it->first;
		it->second-=1;
	}
	cout << cost << endl;
}
