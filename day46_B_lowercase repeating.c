//Q92. Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0}, i, found = 0;
    gets(str);
    for(i=0; str[i]!='\0'; i++) {
        if(str[i]>='a' && str[i]<='z') {
            if(freq[str[i]-'a'] == 1) {
                printf("%c", str[i]);
                found = 1;
                break;
            }
            freq[str[i]-'a']++;
        }
    }
    if(!found)
        printf("No repeating lowercase alphabet");
}
