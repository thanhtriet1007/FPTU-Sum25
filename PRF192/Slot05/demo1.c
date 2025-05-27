#include <stdio.h>
#include <stdlib.h>

int main() {
    int x; scanf("%d", &x);
    switch (x % 5)
    {
    case 0:
        printf("Q1");
        break;
    case 1:
        printf("Q2");
        break;;
    case 2:
        printf("Q3");
        break;
    case 3:
        printf("Q4");
        break;
    default:
        printf("Q5");
        break;
    }
    return 0;
}