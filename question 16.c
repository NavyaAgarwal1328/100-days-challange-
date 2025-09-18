#include <stdio.h>
int main (){
	int a,b,c;
	printf("write the value of a\n");
	scanf("%d", &a);
	printf("write the value of b\n");
	scanf("%d", &b);
	printf("write the value of c\n");
	scanf("%d", &c);
	if (a>b && a>c){
		printf("a is largest among them");
	}
	else if (b>a && b>c){
		printf("b is the larget among them");
	}
	else{
		printf("c is the largest among them");
	}
	

	return 0;
}
