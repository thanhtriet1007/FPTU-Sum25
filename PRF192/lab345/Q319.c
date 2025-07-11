/*
Hàm CountDivisor sẽ đếm số lượng ước số của số tự nhiên X.
Ước số của một số tự nhiên thì nhỏ hơn số đó. Số 0 và số 1 không có ước số tức là 0
Hàm SumDigit sẽ tính tổng các chữ số của số tự nhiên N. 
Hàm SumNumber sẽ tính tổng các số tự nhiên nhỏ hơn M và thõa mãn là giá trị tổng các chữ số của nó thì có số lượng ước số là số chẵn .
Chương trình chính sẽ nhập số tự nhiên A từ bàn phím. 
Sau đó, xuất ra màn hình giá trị của hàm SumNumber
INPUT
15
OUTPUT
37
#0+1+4+9+10+13=37 
INPUT
0
OUTPUT
0
INPUT
1
OUTPUT
0
*/

#include<stdio.h>
int main()
{
	int n;
	printf("Input n:");
	scanf("%d",&n);
	
	printf("%d",SumNumber(n));
	
	printf("\nEND");
	getchar();
	return 0;
}
