//Q69. Find the second largest element in an array.
#include <stdio.h>
int main() {
    int n,a[100],i,first,second;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    first=second=-1e9;
    for(i=0;i<n;i++){
        if(a[i]>first){ second=first; first=a[i]; }
        else if(a[i]>second && a[i]<first) second=a[i];
    }
    printf("%d",second);
}
