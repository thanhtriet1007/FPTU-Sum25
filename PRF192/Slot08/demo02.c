#include <stdio.h>
#include <stdlib.h>

int main() {
	int l, r;
	scanf("%d%d", &l, &r);
	int ok = 0;
	for (int i = l; i <= r; ++i) {
		if (i % 10 == 0) {
			ok = 1;
			break;
		}
	}
	if (ok) printf("YES");
	else printf("NO");
	return 0;
}