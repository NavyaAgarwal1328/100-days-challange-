#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("enter how many odd numbers you want \n ");
    scanf("%d", &n);

    for(i = 1; i <= 2*n; i += 2) {
        sum += i;
    }

    printf("%d", sum);
    return 0;
}
