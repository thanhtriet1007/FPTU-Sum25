#include <stdio.h>
#include <stdlib.h>

int main() {
	int s = 0;
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; ++i) {
		s += i;
	}
	printf("%d", s); 
	return 0;
}