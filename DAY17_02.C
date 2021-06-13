//Write a C program to print inverted full pyramid of *

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,i,j;
    scanf("%d",&n);
    if(n<1)
        printf("ERROR");
    else
        for(i=n;i!=0;i--)
        {
          for(j=2*n-1;j!=0;j--)
          {             
            if(j>=n-(i-1) && j<=n+(i-1))
                  printf("* ");
            else
                printf("  ");
          }
            printf("\n");
        }
    
    return 0;
}
