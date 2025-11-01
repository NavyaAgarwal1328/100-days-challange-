//Q68. Delete an element from an array.
#include <stdio.h>
int main() {
    int n,a[100],pos,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&pos); // position to delete (1-based)
    for(i=pos-1;i<n-1;i++) a[i]=a[i+1];
    n--;
    for(i=0;i<n;i++) printf("%d ",a[i]);
}
