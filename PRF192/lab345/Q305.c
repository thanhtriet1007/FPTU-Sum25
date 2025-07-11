#include<stdio.h>
// Kiem tra x la so nguyen to, 
// tra ve 1 neu la nguyen to, 0 neu la khong nguyen to
// vi du: x=2 -> 1, x=1 -> 0, x=0 -> 0, x=7 -> 1, x=8 -> 0 
int KiemTraNguyenTo(int x)
{
	int flag = 0;
	
	// your code
	
	return flag;
}
// Tinh tong cac so nguyen to nho hon x
// vi du: x = 10 -> tong = 2+3+5+7 = 17
int TongSoNguyenTo(int x)
{
	// your code
}

int main()
{
	int n;
	printf("Input n:");
	scanf("%d",&n);
	
	printf("%d",TongSoNguyenTo(n));
	
	printf("\nEND");
	getchar();
	return 0;
}
