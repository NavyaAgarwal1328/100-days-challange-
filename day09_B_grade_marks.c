#include <stdio.h>

int main(void) {
	float a,percentage;
	printf("write the marks\n");
	scanf("%f", &a);
	percentage=(a/100)*100;
	if(percentage>=90 && percentage<=100){
		printf("grade A");
	}
	
	else if(percentage>=80 && percentage<=89){
		printf("grade B");
	}
	
	else if(percentage>=70 && percentage<=79){
		printf("grade C");
	}
		
	else if(percentage>=60 && percentage<=69){
		printf("grade D");
	}
		
	else{
		printf("grade F");
	}
	return 0;
}
