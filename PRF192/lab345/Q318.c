/*
Hàm CountDivisor sẽ đếm số lượng ước số của số tự nhiên X.
Ước số của một số tự nhiên thì nhỏ hơn số đó. Số 0 và số 1 không có ước số tức là 0
Hàm SumDivisorNumer sẽ tính tổng số lượng các ước số của những số tự nhiên nhỏ hơn N.
Chương trình chính sẽ nhập số tự nhiên A từ bàn phím. Sau đó, in giá trị hàm SumDivisorNumber ra màn hình.
INPUT
8
OUTPUT
9
#0(0),1(0),2(1),3(1),4(2),5(1),6(3),7(1)
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
	
	printf("%d",SumDivisorNumber(n));
	
	printf("\nEND");
	getchar();
	return 0;
}
