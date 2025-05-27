/* Q6
Viet chuong trinh nhap vao 2 so thuc a, b. 
Hay tim nghiem phuong trinh a*x + b = 0

TEST CASE 1
INPUT
a=0
b=0
OUTPUT
infinity

TEST CASE 2
INPUT
a=0
b=1
OUTPUT
none

TEST CASE 3
INPUT
a=2
b=-4
OUTPUT
2.00
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	double a, b; scanf("%lf%lf", &a, &b);
	if (a == 0 && b == 0) {
		printf("infinity");
		return 0;
	}
	if (a == 0 && b != 0) {
		printf("none");
		return 0;
	}
	double result = -b / a;
	printf("%.2lf", result);
	return 0;
}
