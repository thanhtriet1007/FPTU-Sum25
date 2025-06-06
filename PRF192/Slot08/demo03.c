#include <stdio.h>
#include <stdlib.h>

int cnt = 0;

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; ++i) { 
		cnt += i % 10 == 0;
	}
	printf("%d", cnt);
	return 0;
}