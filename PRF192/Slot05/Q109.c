/*Q8
Viet chuong trinh nhap diem math, computer, english, physic
dua vao ket qua gia tri trung binh (result) cua cac diem so. 
Hay xuat ra man hinh ket qua xep loai

result >= 9 : A
result >= 8 : B
result >= 7 : C
result >= 6 : D
result >= 4 : E
result < 4 :  F

TEST CASE
INPUT
math, computer, english, physic=8 9 7 9
OUTPUT
B
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	double math, computer, eng, phy;
	scanf("%lf%lf%lf%lf", &math, &computer, &eng, &phy); 
	double avg = (math + computer + eng + phy) / 4.0;
	if (avg >= 9) {
		printf("A");
	}
	else if (avg >= 8) {
		printf("B");
	}
	else if (avg >= 7) {
		printf("C");
	}
	else if (avg >= 6) {
		printf("D");
	}
	else if (avg >= 4) {
		printf("E");
	}
	else printf("F");
	return 0;
}
