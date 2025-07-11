#include<stdio.h>

int SumToN(int n)
{
	int s;
	// your code
	return s;
}

// S= 1/1 + 2/(1+2) + 3/(1+2+3) + 4/(1+2+3+4) +.....+x/(1+2+...+x)
double SumOf(int x)
{
	int s;
	// your code
	return s;
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
