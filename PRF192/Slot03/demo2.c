#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 10;
	float y = 5.033213f;
	double z = 7.43234123;
	
	printf("Gia tri cua x la: %4d\n", x);
	printf("Gia tri cua z la: %.2f\n", y);
	printf("Gia tri cua t la: %.2lf\n", z);
	return 0;
}