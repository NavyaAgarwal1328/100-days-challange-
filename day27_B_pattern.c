//Q54. Write a program to print the following pattern:

  // *
  //***
 //*****
//*******
 //*****
  //***
   //*
   #include <stdio.h>

int main() {
    int n = 4;
    for (int i = 1; i <= 2*n-1; i++) {
        int stars = i <= n ? 2*i-1 : 2*(2*n-i)-1;
        int spaces = (2*n-1 - stars)/2;
        for (int s = 0; s < spaces; s++) printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        printf("\n");
    }
    return 0;
}
