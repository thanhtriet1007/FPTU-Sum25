/*Q6
Viet chuong trinh nhap vao ban phim so nguyen x
Hay xuat ra man hinh ngay trong tuan nhu luat ben duoi
Neu x chia 7 du 0 xuat MONDAY 
Neu x chia 7 du 1 xuat TUESDAY
Neu x chia 7 du 2 xuat WEDNESDAY
Neu x chia 7 du 3 xuat THURSDAY
Neu x chia 7 du 4 xuat FRIDAY
Neu x chia 7 du 5 xuat SATURDAY
Neu x chia 7 du 6 xuat SUNDAY
Truong hop khac xuat ERROR
TEST CASE
INPUT
x=-9
OUTPUT
ERROR
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int x; scanf("%d", &x);
	if (x % 7 == 0) {
		printf("MONDAY");
	}
	else if (x % 7 == 1) {
		printf("TUESDAY");
	}
	else if (x % 7 == 2) {
		printf("WEDNESDAY");
	}
	else if (x % 7 == 3) {
		printf("THURSDAY");
	}
	else if (x % 7 == 4) {
		printf("FRIDAY");
	}
	else if (x % 7 == 5) {
		printf("SATURDAY");
	}
	else if (x % 7 == 6) {
		printf("SUNDAY");
	}
	else printf("ERROR");
	return 0;
}
