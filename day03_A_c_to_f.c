//Q5. Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main() {
    float c;
    scanf("%f", &c);
    printf("Fahrenheit=%.2f", (c*9/5)+32);
    return 0;
}
