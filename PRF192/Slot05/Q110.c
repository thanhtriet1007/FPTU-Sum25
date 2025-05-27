/*Q9
Viet chuong trinh nhap 3 so nguyen a,b,c. 
Hay xuat ra gia tri lon nhat

TEST CASE
INPUT
a=5
b=9
c=7
OUTPUT
9
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,c;
	scanf("%d%d%d", &a, &b, &c);
	int result = a;
	if (b > result) {
		result = b;
	}
	if (c > result) {
		result = c;
	}
	printf("%d", result);
	return 0;
}