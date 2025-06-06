#include <stdio.h>
int main() {
	int a,b,x;
	scanf("%d%d%d",&a,&b,&x);
	for (int i =a; i<=b; i++) {
		if (i%x==0) printf("%d\n",i);
	}
	return 0;
}