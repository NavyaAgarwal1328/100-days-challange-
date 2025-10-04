//Q23. Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled
#include <stdio.h>

int main() {
	int days,fine;
	printf("enter number of late days\n");
	scanf("%d",&days);
	if(days<=0){
		printf("you don't have to pay anything");
	}
	
else if (days<=5){
	fine= 2*days;
	printf("according to it you have to pay %d rupees", fine);
}
else if (days<=10){
	fine=(5*2+(days-5)*4);
	printf("you have to pay %d rupees",fine);
}
else if (days<=20){
	fine=((5*2)+(5*4)+(days-10)*6);
	printf("you have to pay %d rupees",fine);
}
else{
	printf("membership cancelled");
}
	return 0;
}
