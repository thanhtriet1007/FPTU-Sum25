#include <stdio.h>
#include <stdlib.h>

int main() {
	int x; scanf("%d", &x);
	if (x & 1) {
		printf("Odd\n");
	}
	else {
		printf("Even\n");
	}
	if (x < 0) {
		printf("Negative\n");
	}
	else {
		printf("Positive\n");
	}
	printf("End"); 
	return 0;
}