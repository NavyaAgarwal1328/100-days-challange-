#include <stdio.h>

int main() {
	float a,b,sum,subtraction,multiplication,division;
	printf("enter the value of a:\n");
	scanf("%f", &a);
	printf("enter the value of b:\n");
	scanf("%f", &b);
	sum=a+b;
	subtraction=a-b;
	multiplication=a*b;
	division=a/b;
	printf("the sum is%f\n", sum);
	printf("the subtraction is%f\n", subtraction);
	printf("the multiplication is%f\n", multiplication);
	printf("the division is%f\n", division);
	return 0;
}
