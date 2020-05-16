#include <bits/stdc++.h>

using namespace std;
void update(int *a,int *b) {
//    printf("aa", a);
	int *t = a;
	int *m = b;
	*t = *a + *b;
	*m = abs(*a - (*b)*2);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);	
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

