/*
Hàm CountDivisor sẽ đếm số lượng ước số của số tự nhiên X.
Ước số của một số tự nhiên thì nhỏ hơn số đó. Số 0 và số 1 không có ước số tức là 0
Hàm CountNumber sẽ đếm số lượng số tự nhiên nhỏ hơn N mà có số lượng ước số là chẵn.
Chương trình chính sẽ nhập số tự nhiên A từ bàn phím. Sau đó, in giá trị hàm CountNumber ra màn hình.
INPUT
17
OUTPUT
5
#0,1,4,9,16
INPUT
0
OUTPUT
0
INPUT
1
OUTPUT
1
*/

#include<stdio.h>
int main()
{
	int n;
	printf("Input n:");
	scanf("%d",&n);
	
	printf("%d",CountNumber(n));
	
	printf("\nEND");
	getchar();
	return 0;
}
