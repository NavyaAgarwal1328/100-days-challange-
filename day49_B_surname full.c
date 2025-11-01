//Q98. Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    gets(str);
    len = strlen(str);

    // Print initials
    if(str[0] != ' ')
        printf("%c.", str[0]);
    for(i = 0; i < len; i++)
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0' && i < len-1)
            if(strchr(str+i+1, ' ') == NULL) break;
            else printf("%c.", str[i+1]);

    // Print surname (last word)
    while(i < len && str[i] == ' ') i++;
    printf("%s", str + i);
}
