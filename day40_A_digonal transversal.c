//Q79. Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int n,a[10][10],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    
    printf("Main diagonal: ");
    for(i=0;i<n;i++)
        printf("%d ", a[i][i]);

    printf("\nSecondary diagonal: ");
    for(i=0;i<n;i++)
        printf("%d ", a[i][n-i-1]);
}
