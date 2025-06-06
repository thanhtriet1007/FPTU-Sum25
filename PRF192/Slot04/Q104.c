/*Q5
Biet rang so tien cuoc = so km * 15000 (**)
Hay nhap so km di duoc la so nguyen tu ban phim
Neu so km <= 1 thi tien cuoc la 15000
Neu so km nho hon hoac bang 10 tien cuoc tinh nhu (**)
Neu so km lon hon 10 thi phu thu moi km tang them la 5000

TEST CASE 1
INPUT
km=0
OUTPUT
15000

TEST CASE 2
INPUT
km=10
OUTPUT
150000

TEST CASE 3
INPUT
km=20
OUTPUT
350000
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int totalDistance; scanf("%d", &totalDistance);
	int answer = 0;
	if (totalDistance <= 1) {
		answer = 15000;
	}
	else if (totalDistance <= 10) {
		answer += totalDistance * 15000;
	}
	else {
		answer += 15000 * 10;
		answer += 20000 * (totalDistance - 10);
	}
	printf("%d", answer);
	return 0;
}
