#include <stdio.h>
#include <stdlib.h>

int main() {
	int l, r; 
	scanf("%d%d", &l, &r);
	int cur = 0, curVal = 1, ans = -1;
	while (curVal <= r) {
		if (curVal >= l) ans = cur;
		curVal *= 10;
		++cur;
	}
	printf("%d", ans);
	return 0;
}