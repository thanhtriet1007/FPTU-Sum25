/* Q1: Bang cuu chuong mo rong
Nhap 2 so nguyen a va n tu ban phim. Hay xuat ra tren tung dong
a*0 = ?
a*1 = ?
......
a*n = ?

TEST CASE
INPUT
a=9
n=5
OUTPUT
9*0=0
9*1=9
9*2=18
9*3=27
9*4=36
9*5=45
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	int i = 0;
	while (i <= m) {
		printf("%d%c%d%c%d\n", n, '*', i, '=', n * i);
		++i;
	}
	return 0;
}


