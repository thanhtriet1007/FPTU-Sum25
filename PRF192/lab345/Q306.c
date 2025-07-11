#include<stdio.h>
int KiemTraNguyenTo(int x)
{
	// your code
}
// Dem so luong cac so nguyen to lon hon x nhung nho hon y
// vi du: x = 10 , y = 5-> dem = 0
// vi du: x = 10, y = 20 -> dem = 4 vi 11, 13, 17, 19
int DemSoNguyenToXY(int x,int y)
{
	// your code
}

int main()
{
	int n,m;
	printf("Input n and m:");
	scanf("%d%d",&n,&m);
	
	printf("%d",DemSoNguyenToXY(n,m));
	
	printf("\nEND");
	getchar();
	return 0;
}
