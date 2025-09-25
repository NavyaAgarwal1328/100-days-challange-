#include <stdio.h>

int main() {
	int a;
	printf(" write the value of a\n");
	scanf("%d", &a);
	if((a%4==0)||(a%400==0 && a!=100)){
	printf("the year is leap year");
	}
	else{
		printf("the year is not an leap year");
	}
	return 0;
}
