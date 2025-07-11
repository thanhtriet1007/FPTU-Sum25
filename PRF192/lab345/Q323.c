/*
Số nguyên tố là chia hết cho 1 và chính nó. Số 0, 1 không là số nguyên tố. 2 là số nguyên tố chẵn duy nhất.
Hàm CheckPrime sẽ kiểm tra xem một số tự nhiên X có là số nguyên tố hay không (True nếu là số nguyên tố, ngược lại là False)
Hàm SumDigit sẽ tính tổng các chữ số của số tự nhiên N. 
Hàm SumNumber sẽ tính tổng các số tự nhiên nhỏ hơn M và thõa mãn là tổng các chữ số của nó là số nguyên tố.
Chương trình chính sẽ nhập số tự nhiên A từ bàn phím. Sau đó, xuất ra màn hình giá trị của hàm SumNumber
INPUT
15
OUTPUT
54
#2+3+5+7+11+12+14 = 54
INPUT
2
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
