//Q85. Reverse a string.
#include <stdio.h>
int main() {
    char str[100];
    int i, len = 0;
    gets(str);
    for(i=0; str[i]!='\0'; i++)
        len++;
    for(i=len-1; i>=0; i--)
        printf("%c", str[i]);
}
