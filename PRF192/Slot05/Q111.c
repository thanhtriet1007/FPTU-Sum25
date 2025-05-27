/*Q10
Viet chuong trinh nhap luong hang thang (USD).
Nhập giá trị số lương hàng tháng (salary) 
Xuất ra màn hình thuế đóng hàng năm.
(làm tròn 2 chữ số thập phân).
Biết rằng, thu nhập hàng năm (income) = salary*12

Nếu thu nhập:
_nhỏ hơn bằng 10000 thì tỉ lệ thuế là 5%
_thu nhập từ trên 10000 đến nhỏ hơn bằng 20000 thì tỉ lệ thuế là 10%
_thu nhập từ trên 20000 đến nhỏ hơn bằng 40000 thì tỉ lệ thuế là 15%
_thu nhập từ trên 40000 đến nhỏ hơn bằng 60000 thì tỉ lệ thuế là 20%
_thu nhập từ trên 60000 thì tỉ lệ thuế là 35%

TEST CASE 1
INPUT
1000
OUTPUT
700.00

TEST CASE 2
INPUT
8000
OUTPUT
21100.00
*/


#include <stdio.h>
#include <stdlib.h>

int main() { 
	double salaryPerMonth, income;
	scanf("%lf", &salaryPerMonth);
	income = salaryPerMonth * 12;
	double tax;
	if (income <= 10000) {
		tax = income * 5.0 / 100.0;
	}
	else if (income <= 20000) {
		tax = 10000.0 * 5.0 / 100.0 + (income - 10000.0) * 10.0 / 100.0;
	}
	else if (income <= 40000) {
		tax = 10000.0 * 5.0 / 100.0 + 10000.0 * 10.0 / 100.0 + (income - 20000.0) * 15.0 / 100.0;
	}
	else if (income <= 60000) {
		tax = 10000.0 * 5.0 / 100.0 + 10000.0 * 10.0 / 100.0 + 20000.0 * 15.0 / 100.0 + (income - 40000.0) * 15.0 / 100.0;
	}
	else tax = 10000.0 * 5.0 / 100.0 + 10000.0 * 10.0 / 100.0 + 20000.0 * 15.0 / 100.0 + 20000.0 * 20.0 / 100.0 + (income - 60000.0) * 35.0 / 100.0;
	printf("%.2lf", tax);
	return 0;
}