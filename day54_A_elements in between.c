/*Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all
elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot 
integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one 
pivot integer for the given input.
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;

    int x = -1;
    for (int i = 1; i <= n; i++) {
        long long left = (long long)i * (i + 1) / 2;
        long long right = total - (long long)(i - 1) * i / 2;

        if (left == right) {
            x = i;
            break;
        }
    }

    printf("%d", x);
    return 0;
}
