#include <stdio.h>
#include <stdlib.h>

int main() {
	for (int lim = 5; lim >= 1; --lim) {
		for (int i = 1; i <= lim; ++i) {
			printf("* ");
		}
		printf("\n");
	}
	printf("* * * * *\n");
	printf("* * * *\n");
	printf("* * *\n");
	printf("* *\n");
	printf("*");
	return 0;
}