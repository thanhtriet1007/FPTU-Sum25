/*Q14: Hay nhap so nguyen n tu ban phim. 
Hay xuat ra man hinh cac chu so cua n

TEST CASE
INPUT
246712
OUTPUT
2
1
7
6
4
2
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
	int n; scanf("%d", &n);
	while (n) {
		printf("%d\n", n % 10); 
		n /= 10;
	}
	return 0;
}

