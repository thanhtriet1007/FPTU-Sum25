/*Q13: Nhap 2 so nguyen n va m tu ban phim. Hay xuat ra cac so chia het
cho n nhung nho hon m
TESTCASE 1
INPUT
n=10
m=5
OUTPUT
end

TESTCASE 2
INPUT
n=4
m=19
OUTPUT
4
8
12
16
end
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = n; i <= m; ++i) {
		if (i % n == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}

