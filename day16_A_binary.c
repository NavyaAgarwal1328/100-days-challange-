#include <stdio.h>

int main() {
    int n, rem, binary = 0, place = 1;
    printf("Enter a number: \n");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 2;
        binary = rem * place + binary;
        n /= 2;
        place *= 10;
    }
    printf("Binary: %d\n", binary);
    return 0;
}
