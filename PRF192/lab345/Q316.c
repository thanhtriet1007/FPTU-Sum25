/*

Hàm SumDivisor sẽ tính tổng các ước số của số tự nhiên X.
Ước số của một số tự nhiên thì nhỏ hơn số đó. Số 0 và số 1 không có ước số tức là 0
Chương trình chính sẽ nhập số tự nhiên A từ bàn phím. 
Sau đó, in ra màn hình các giá trị nhỏ hơn N mà tổng ước số của nó là số chẵn.
INPUT
11
OUTPUT
0
1
6
9
10
#0(0),1(0),6(1,2,3),9(1,3),10(1,2,5)
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
	
	int i;
	for(i=0; i < n; i++)
	{
		if(SumDivisor(i)%2 == 0)
		{
			printf("%d\n",i);
		}
	}
	
	printf("\nEND");
	getchar();
	return 0;
}
