//Write a C Program to read a 2D Array and then display it.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int c,r,i,j,a[10][10];
    scanf("%d", &r);
    scanf("%d", &c);
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)                  
        scanf("%d", &a[i][j]);       
    }
    
     for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)           
          printf("%d ", a[i][j]);
         printf("\n");
    }
    
      
    return 0;
}
