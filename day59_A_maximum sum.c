/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the 
subarrays of size k.*/
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int sum = 0;

    // First window
    for (int i = 0; i < k; i++)
        sum += arr[i];

    int maxSum = sum;

    // Slide the window
    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];  // add new, remove old
        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);
    return 0;
}
