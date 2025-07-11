#include<stdio.h>
#include<math.h>
// Kiem tra x la so chinh phuong: 1 nếu là số chính phương, ngược lại là 0
// So chinh phuong la so ma no bang binh phuong mot so nguyen, vi du: 0, 1, 4, 9, 16 
int CheckCP(int x)
{
	// your code
}

// Kiem tra x la so nguyen to: 1 là số nguyên tố, ngược lại là 0
// So nguyen to la so chia het cho chinh no va 1, vi du: 2, 3, 5, 7, 11
int CheckPrime(int x)
{
	// your code
}

// Tinh tong cac so chinh phuong hoặc là số nguyên tố nho hon N
// vi du: N = 10 -> sum = 0+1+2+3+4+5+7+9=31
int SumCPPrime(int N)
{
	// your code
}

int main()
{
	int n;
	printf("Input n:");
	scanf("%d",&n);
	
	printf("%d",SumCPPrime(n));
	
	printf("\nEND");
	getchar();
	return 0;
}
