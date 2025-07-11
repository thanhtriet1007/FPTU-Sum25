#include<stdio.h>

// S= 1/1 + 1/(1+2) + 1/(1+2+3) + 1/(1+2+3+4) +.....+1/(1+2+...+x)

double SumOf(int x)
{
	// your code
}

// n = 2 => sum = 1.33
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
