//Write a C program to find the frequency of odd and even numbers in the 1D array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,n,e,o,a[10];
    o=0;
    e=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
       scanf("%d", &a[i]);
    
   for(i=0;i<n;i++)
       {
       if(a[i]%2==0)
           e++;
       else 
           o++;
       }
    printf("%d", e);
    printf("\n%d", o);
   
    return 0;
}
