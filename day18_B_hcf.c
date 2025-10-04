//Q36. Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int a, b, hcf;
    printf("Enter two numbers:\n ");
    scanf("%d %d", &a, &b);

    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    hcf = a;
    printf("HCF = %d\n", hcf);
    return 0;
}
