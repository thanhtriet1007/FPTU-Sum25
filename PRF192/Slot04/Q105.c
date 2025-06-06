// BY TEMPLATE
/*
Nhập 3 cạnh của tam giác là số nguyên, 
nếu 3 cạnh của tam giác đều in 1, 
nếu là tam giác cân in 2, 
nếu là tam giác vuông in 3, 
nếu là tam giác thường in 4.
Giả sử 3 cạnh đã là 3 cạnh của tam giác không hợp lệ thì in 0

TESTCASE
INPUT
1
1
1
OUTPUT
1
-----
INPUT
2
3
2
OUTPUT
2
-----
INPUT
4
3
5
OUTPUT
3
-----
INPUT
6
3
5
OUTPUT
4
-----
INPUT
1
2
1
OUTPUT
0
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	scanf("%d%d%d",&a,&b,&c); 
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b && b == c) {
			printf("1");
		}
		else if (a == b || b == c || a == c) {
			printf("2");
		}
		else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
			printf("3");
		}
		else printf("4");
	}
	else {
		printf("0");
	}
	return 0;
}