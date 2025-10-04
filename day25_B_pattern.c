//Q50. Write a program to print the following pattern:
//*****
 //****
  //***
   //**
    //*
    
#include <stdio.h>

int main() {
    int n = 5; 

    for (int i = n; i >= 1; i--) {
        
        for (int s = 0; s < n - i; s++)
            putchar(' ');
       
        for (int j = 0; j < i; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
