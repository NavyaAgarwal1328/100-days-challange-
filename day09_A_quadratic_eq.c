#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float discriminant, root1, root2;
    printf("write value of xsquare\n");
    scanf("%d", &a);
printf("write value of x\n");
    scanf("%d", &b);
printf("write value of constant\n");
    scanf("%d", &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different: %f, %f\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("Roots are real and same: %f\n", root1);
    }
    else {
        printf("Roots are complex\n");
    }

    return 0;
}
