/*Write a program to take a string input. Change it to sentence case.*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int i;

    // convert entire string to lowercase first
    for (i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);

    // convert first non-space character to uppercase
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[i] = toupper(str[i]);
            break;
        }
    }

    printf("%s", str);
    return 0;
}

