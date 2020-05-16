/* Enter your macros here */
#define FUNCTION(f, op)
#define minimum(a,b) a= min(a,b)
#define maximum(a,b) a = max(a,b)
#define foreach(v, i) for(int i = 0; i < v.size(); i++)
#define io(v) cin >>v
#define INF 100000000
#define toStr(str) #str

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		cout <<v[i]<<endl;
		minimum(mn, v[i]);
		cout <<"mn"<<" "<<mn<<endl;
		maximum(mx, v[i]);
	}
	cout <<mx<<" "<<mn<<endl;
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}
