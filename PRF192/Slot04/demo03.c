#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	scanf("%d", &x);
	if (x & 1) {
		printf("Odd\n");
	}
	printf("End\n");
	
	getchar();
	return 0;
}