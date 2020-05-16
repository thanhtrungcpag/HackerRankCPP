#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n, q;
	cin >>n>>q;
	vector<int> a[n];
	for(int i = 0 ; i < n ; i++){
		int k;
		cin >>k;
		for(int j = 0; j < k; j++){
			int temp;
			cin >>temp;
			a[i].push_back(temp);
		}
	}
	for(int i = 0 ; i < q; i++){
		int n,m;
		cin >>n>>m;
		cout <<a[n][m]<<endl;
	}
	
	return 0;
}
