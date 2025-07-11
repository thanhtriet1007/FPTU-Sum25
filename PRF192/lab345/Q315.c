#include<stdio.h>

// Tính tổng tới N, ví dụ s = 1+2+3+4+.....+N
int SumToN(int n)
{
	int s;
	// your code
	return s;
}

// x! goi la giai thua
// Tinh giai thua cua mot so x
// x! = 1*2*.....*x

int GiaiThua(int x)
{
	// your code
}

// Tinh tong
// S= 1!/1 + 2!/(1+2) + 3!/(1+2+3) + 4!/(1+2+3+4) +.....+x!/(1+2+...+x)

double SumOf(int x)
{
	// your code
}

// n = 2 => sum = 1.67

int main()
{
	int n;
	printf("Input n:");
	scanf("%d",&n);
	
	printf("%.2lf",SumOf(n));
	
	printf("\nEND");
	getchar();
	return 0;
}
