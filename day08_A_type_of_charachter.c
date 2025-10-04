//Q15. Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main(){
char ch;
printf("input the character\n");
scanf("%c",&ch);
if(ch>='A' && ch<='Z'){
	printf("the character is uppercase\n");}
	else if (ch>='a' && ch<='z'){
		printf("the character is lowecase\n");
	
}
	else if (ch>='0'){
		printf("the character is digit");
	}
	else {
		printf("the character is special character");
	}
	return 0;
}
