//Q40. Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    char bin[100];
    printf("Enter a binary number: \n");
    scanf("%s", bin);

    printf("1's Complement = ");
    for (int i = 0; bin[i] != '\0'; i++) {
        if (bin[i] == '0')
            printf("1");
        else if (bin[i] == '1')
            printf("0");
        else {
            printf("\nInvalid binary digit!\n");
            return 1;
        }
    }
    printf("\n");
    return 0;
}
