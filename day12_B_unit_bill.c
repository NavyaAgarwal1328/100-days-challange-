
#include <stdio.h>
 
int main() {
	int unit,bill;
	printf("enter number of unit used \n");
	scanf("%d",&unit);
	if(unit<=0){
		printf("you don't have to pay anything");
	}
 
else if (unit<=100){
	bill= 5*unit;
	printf("according to it you have to pay %d rupees",bill);
}
else if (unit<=200){
	bill=(100*5+(unit-100)*7);
	printf("you have to pay %d rupees",bill);
}
else if (unit<=300){
	bill=((100*5)+(100*7)+(unit-200)*10);
	printf("you have to pay %d rupees",bill);
}
else{
	bill=((100*5)+(100*7)+(100*10)+(unit-300)*12);
	printf("you have to pay %d rupees",bill);
}
	return 0;
}