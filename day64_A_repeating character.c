/*Write a program to take a string s as input. The task is to find the length of the longest substring without 
repeating characters. Print the length as output.*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int last[256], i, start = 0, maxLen = 0;

    scanf("%s", s);
    memset(last, -1, sizeof(last));

    for(i = 0; s[i]; i++) {
        if(last[(unsigned char)s[i]] >= start)
            start = last[(unsigned char)s[i]] + 1;

        last[(unsigned char)s[i]] = i;

        if(i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("%d", maxLen);
    return 0;
}
