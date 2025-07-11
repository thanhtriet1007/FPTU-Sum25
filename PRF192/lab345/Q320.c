/*
Số hoàn hảo là số mà bằng tổng các ước số của nó. Ước số của một số tự nhiên thì nhỏ hơn số đó. Số 0 và số 1 không có ước số.
Hàm CheckPerfect sẽ kiểm tra xem một số tự nhiên X có là số hoàn hảo (True nếu là số hoàn hảo, ngược lại là False)
Hàm SumDigit sẽ tính tổng các chữ số của số tự nhiên N. 
Hàm SumNumber sẽ tính tổng các số tự nhiên nhỏ hơn M và thõa mãn là tổng các chữ số của nó là số hoàn hảo.
Chương trình chính sẽ nhập số tự nhiên A từ bàn phím. Sau đó, xuất ra màn hình giá trị của hàm SumNumber
INPUT
17
OUTPUT
21
#6 (6=1+2+3) + 15 (6 = 1+2+3) = 21
INPUT
1
OUTPUT
0
INPUT
0
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
