//Q52. Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*
#include <stdio.h>

int main(void) {
    int groups[] = {1, 3, 4, 3, 1};
    int m = sizeof(groups) / sizeof(groups[0]);

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < groups[i]; ++j) {
            printf("*\n");
        }
        if (i != m - 1)  
            putchar('\n');
    }

    return 0;
}
