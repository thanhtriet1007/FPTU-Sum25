#include<stdio.h>
// Calculating average of three real values
double Avg(double x, double y, double z)
{
	// your code
}

int main()
{
	double a,b,c;
	printf("Input a,b,c:");
	scanf("%lf%lf%lf",&a,&b,&c);
	
	printf("%.2lf",Avg(a,b,c));
	
	printf("\nEND");
	getchar();
	return 0;
}
