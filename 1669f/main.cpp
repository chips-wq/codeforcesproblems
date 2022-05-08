#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int>& v , int n){
	int max = 0 , left = 0 , right = n - 1 , suml = 0 , sumr = 0;
	suml+=v[left];
	sumr+=v[right];
	while(left < right){
		if(suml == sumr){
			max = left + 1 + (n - right);
		}
		if(suml <= sumr){
			left++;
			suml+=v[left];
		}else{
			right--;
			sumr+=v[right];
		}
	}
	cout << max << '\n';
}

int main(){
	int t , n;
	cin >> t;
	for(int i = 0; i < t;i++){
		cin >> n;
		vector<int> v(n , 0);
		for(int j = 0; j < n; j++){
			cin >> v[j];
		}
		solve(v , n);
	}
}

