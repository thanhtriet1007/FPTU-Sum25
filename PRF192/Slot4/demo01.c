#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y;
	x = 5, y = 10;
	int s = x == y;
	printf("Ket qua so sanh x == y la %d\n", s);
	printf("Ket qua so sanh x < y la %d\n", x < y);
	printf("Ket qua so sanh x >= y la %d\n", x >= y);
	printf("Ket qua so sanh x && y la %d\n", x && y);
	printf("Ket qua so sanh x || y la %d\n", x || y);
	printf("Ket qua so sanh !x la %d\n", !x);
	printf("Ket qua so sanh (x > y) && (x == y) la %d\n", (x > y) && (x == y));
	printf("Ket qua so sanh !((x == y) || (x <= y)) la %d\n", !((x == y) || (x <= y)));
	printf("Ket qua so sanh !((x >= y) && (x == y) || (x <= y) && (x > y)) la %d\n", !((x >= y) && (x == y) || (x <= y) && (x > y)));
	printf("Ket qua so sanh x >= y la %d\n", x >= y);
	
	return 0;