/*
Số chính phương là số mà bằng bình phương của một số tự nhiên. Ví dụ: 4 = 2*2
Hàm CheckSquare sẽ kiểm tra xem một số tự nhiên X có là số chính phương hay không (True nếu là số chính phương, ngược lại là False)
Hàm SumDigit sẽ tính tổng các chữ số của số tự nhiên N. 
Hàm SumNumber sẽ tính tổng các số tự nhiên nhỏ hơn M và thõa mãn là tổng các chữ số của nó là số chính phương.
Chương trình chính sẽ nhập số tự nhiên A từ bàn phím. Sau đó, xuất ra màn hình giá trị của hàm SumNumber
INPUT
17
OUTPUT
37
#0+1+4+9+10+13=37
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
