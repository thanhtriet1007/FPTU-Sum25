/*
Số Palindrome là số mà viết xuôi hay ngược đều như nhau.
Hàm CheckPalindrome sẽ kiểm tra xem một số tự nhiên X có là số Palindrome (True nếu là số Palindrome, ngược lại là False)
Hàm SumDigit sẽ tính tổng các chữ số của số tự nhiên N. 
Hàm SumNumber sẽ tính tổng các số tự nhiên nhỏ hơn M và thõa mãn là tổng các chữ số của nó là số Palindrome.
Chương trình chính sẽ nhập số tự nhiên A từ bàn phím. Sau đó, xuất ra màn hình giá trị của hàm SumNumber
INPUT
24
OUTPUT
257
#0+1+2+3+4+5+6+7+8+9+10+11+12+13+14+15+16+17+18+20+21+22+23=257
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
