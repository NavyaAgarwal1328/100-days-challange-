//Q43. Write a program to check if a number is a strong number.

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int main() {
    int num, sum = 0, temp, rem;
    printf("Enter a number:\n ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a Strong Number\n", num);
    else
        printf("%d is NOT a Strong Number\n", num);

    return 0;
}
