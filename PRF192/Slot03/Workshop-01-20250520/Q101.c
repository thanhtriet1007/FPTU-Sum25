/*
Chung ta co cac menh gia tien: 1, 2, 5, 10
Viet chuong trinh nhap mot so tien la so nguyen
In man hinh so luong to tien co the doi dua tren cac menh gia
Luu y: So luong to tien doi duoc la nho nhat

TEST CASE 1

INPUT
112

OUTPUT
12

-----------
TEST CASE 2

INPUT
118

OUTPUT
14

*/
#include <stdio.h>
int main()
{
	printf("INPUT\n");
	/*
		your code here
	*/	
	int totalMoney;
	scanf("%d", &totalMoney);

	int countBill = 0;
	int currentCount = 0;
	currentCount = totalMoney / 10;
	countBill = countBill + currentCount;
	totalMoney = totalMoney - currentCount * 10;

	currentCount = totalMoney / 5;
	countBill = countBill + currentCount;
	totalMoney = totalMoney - currentCount * 5;

	currentCount = totalMoney / 2;
	countBill = countBill + currentCount;
	totalMoney = totalMoney - currentCount * 2;

	currentCount = totalMoney / 1;
	countBill = countBill + currentCount;
	totalMoney = totalMoney - currentCount * 1;
	
	printf("OUTPUT\n");	
	/*
		your code here
	*/
	printf("%d", countBill);
	getchar();
	return 0;
}
