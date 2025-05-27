/*Q7
Viet chuong trinh nhap 2 so thuc a,b va phep toan can tinh (+,-,*,:)
Sau do, in ket qua ra man hinh
TEST CASE
INPUT
2:5
OUTPUT
0.40
*/
#include<stdio.h>
int main()
{
	double a,b;
	char op;
	scanf("%lf%c%lf", &a , &op , &b);
	switch(op)
	{
		case '+':
			printf("%.2lf", a + b);
			break;
		case '-':
			printf("%.2lf", a - b);
			break;
		case '*':
			printf("%.2lf", a * b);
			break;
		case ':':
			printf("%.2lf", a / b);
			break;
		default:
			printf("Error");
			break;	
	}
	
	getchar();
	return 0;
}
