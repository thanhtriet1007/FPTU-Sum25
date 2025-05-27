//Q01
/*
Viet chuong trinh cho phep nhap hai gia tri la so nguyen tuong ung hai bien so a va b.
Hay xuat ra man hinh lan luot cac gia tri sau theo tung dong 
tuong ung gia tri a+b, a-b, a*b, a/b, a*a+b*b, 1/(a+b)

TEST CASE

INPUT
a=2
b=6

OUTPUT
8
-4
12
0.33
40
0.1250

*/

#include <stdio.h>
int main()
{
	printf("INPUT\n");
	/*
		your code here
	*/	
	int a, b;
	scanf("%d%d", &a, &b);
	printf("OUTPUT\n");	
	/*
		your code here
	*/
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%.2lf\n", a * 1.0 / b);
	printf("%d\n", a * a + b * b);
	printf("%.4f\n", 1.0 / (a + b));
	getchar();
	return 0;
}
