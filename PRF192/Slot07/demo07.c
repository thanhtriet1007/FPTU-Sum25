#include <stdio.h>
#include <stdlib.h> 

int main() {
	int n; 
	scanf("%d", &n);
	int it = 0;
	while (it < n) {
		if (it % 5 == 0 || it % 7 == 0) {
			printf("%d\n", it);
		}
		++it;
	}
	return 0;
}