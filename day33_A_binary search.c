//Q65. Search in a sorted array using binary search.
#include <stdio.h>
int main() {
    int n,a[100],x,l=0,h,mid;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    h=n-1;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==x){ printf("Found at %d",mid+1); return 0; }
        else if(a[mid]<x) l=mid+1;
        else h=mid-1;
    }
    printf("Not found");
}
