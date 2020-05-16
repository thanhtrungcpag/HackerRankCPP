#include<bits/stdc++.h>

using namespace std;

int maxOfFour(int a, int b, int c, int d){
	return max(max(a,b),max(c,d));
}

int main(){
	int a,b,c,d;
	cin >>a>>b>>c>>d;
	cout <<maxOfFour(a,b,c,d);
	return 0;
}
