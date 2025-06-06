#include <stdio.h>
#include <stdlib.h>
int main(){
	int i=0;
	while (i<10){
	
		
	printf("%d\n",i*i);
	printf("%d\n",i*(i+1));
	printf("%.2lf\n",1.0/(i+1));
		
		i++;
	}
	getchar();
	return 0;
}