#include <stdio.h>
#include <stdlib.h>

int main () {
	int x; scanf("%d", &x); 
	if (x == 1 || x == 2 || x == 3) {
		printf("Q1\n");
	}
	else if (x == 4 || x == 5 || x == 6) {
		printf("Q2\n");
	}
	else if (x == 7 || x == 8 || x == 9) {
		printf("Q3\n");
	}
	else if (x == 10 || x == 11 || x == 12) {
		printf("Q4\n");
	}
	else printf("Error\n");
	printf("End");
	return 0;
}