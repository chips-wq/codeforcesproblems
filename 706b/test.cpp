#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int search(vector<int> v , int val){
	int l = 0 , r = v.size()-1;
	while(l <= r){
		int middle = (l+r)/2;
		if(val < v[middle]){
			r = middle-1;
		}else if (val > v[middle]){
			l = middle+1;
		}else{
			while(middle < v.size() && v[middle] == val){
				middle++;
			}
			return middle;
		}
	}
	int dif = l-r;
	return dif == 1 ? l : r;
}

int main(){
	int n;
	cin >> n;
	vector<int> v(n , 0);
	for(int i = 0;i < v.size();i++){
		cin >> v[i];
	}
	sort(v.begin() , v.end());
	cin >> n;
	for(int i = 0;i < n;i++){
		int x;
		cin >> x;
		int res = search(v , x);
		cout << res << endl;
	}
}
