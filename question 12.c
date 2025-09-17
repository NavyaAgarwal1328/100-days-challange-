#include <stdio.h>

int main() {
	int a;
	printf("write the value of a\n");
	scanf("%d", &a);
	if(a>0){
		printf("the value is positive");
	}
	else if(a<0){
		printf("the value is negative");
	}
	else{
		printf("the value is 0");
	}
	return 0;
}
