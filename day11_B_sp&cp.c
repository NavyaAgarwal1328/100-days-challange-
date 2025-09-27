#include <stdio.h>

int main() {
int cp,sp;
float profit,loss;
printf("write cost price \n write selling price\n");
scanf("%d , %d" ,  &cp, &sp);
if(sp>cp){
	printf("you are in profit\n");
	profit=((sp-cp)/cp)*100;
	printf("you are in profit by %f percentage", profit);
}
else if (cp>sp){
	printf("you are in loss\n");
	loss=((cp-sp)/cp)*100;
	printf("you are in loss by %f percentage", loss);
}
else{
	printf("you are neither in loss nor in profit ");
}
	return 0;
}
