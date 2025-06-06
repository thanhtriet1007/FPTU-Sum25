/* Q3
Viet chuong trinh nhap vao mot so nguyen x tu ban phim
Hay in ra ket qua sau
Neu x > 0 thi in ra Positive
Neu x chia het cho 10 thi in ra 0
Neu x chia het cho 100 thi in ra 00
Cuoi cung la in ra End

TEST CASE
INPUT
x=200
OUTPUT
positive
0
00
end
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int x; scanf("%d", &x);
	if (x > 0) {
		printf("Positive\n");
	}
	if (x % 10 == 0) {
		printf("0\n");
	}
	if (x % 100 == 0) {
		printf("00\n");
	}
	printf("End");
	return 0;
}
