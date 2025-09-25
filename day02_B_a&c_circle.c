#include <stdio.h>
#define PI 3.14
int main() {
    float r;
    scanf("%f", &r);
    printf("Area=%.2f\nCircumference=%.2f", PI*r*r, 2*PI*r);
    return 0;
}
