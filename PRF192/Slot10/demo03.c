#include <stdio.h>
#include <stdlib.h>

void checkEven(int x) {
    if (x % 2 == 0) {
        printf("Even");
    }
    else printf("Odd");
}

int main() {
    int x; scanf("%d", &x);
    //if (checkEven(x)) printf("Even");
    //else printf("Odd");
    checkEven(x);
    return 0;
}