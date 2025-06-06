/* Nhap so nguyen a tu ban phim. Hay xuat ra b?ng c?u chuong 9
a*0 = ?
a*1 = ?
......
a*9 = ?

TEST CASE
INPUT
a=7
OUTPUT
7*0=0
7*1=7
7*2=14
7*3=21
7*4=28
7*5=35
7*6=42
7*7=49
7*8=56
7*9=63
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int i = 0;
	while (i <= 9) {
		printf("%d%c%d%c%d\n", n, '*', i, '=', n * i);
		++i;
	}
	return 0;
}


