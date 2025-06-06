#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	
	printf("%d\n", a + b); 
	printf("%d\n", a - b); 
	printf("%d\n", a * b); 
	printf("%.2lf\n", (1.0 * a) / (1.0 * b)); 
	printf("%d\n", a * a + b * b); 
	printf("%.4lf\n", 1.0 / ((a + b) * 1.0)); 
	
 	return 0; 
}