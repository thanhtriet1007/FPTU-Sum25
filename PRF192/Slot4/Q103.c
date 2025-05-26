/* Q4: Su dung if...else
Viet chuong trinh nhap tu ban phim so nguyen a
Neu a la chan thi xuat Even
nguoc lai thi xuat Odd
Cuoi cung xuat End

TEST CASE
INPUT
a=5
OUTPUT
odd
end
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a; scanf("%d", &a);
	if (a % 2 == 0) {
		printf("Even\n");
	}
	else {
		printf("Odd\n");
	}
	printf("End");
	return 0;
}