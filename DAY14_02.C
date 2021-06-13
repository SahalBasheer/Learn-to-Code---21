//Write a C Program to read the values for a square 2D array and print its main/principal and secondary diagonals.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int c,r,i,j,a[10][10];
    scanf("%d", &r);
    scanf("%d", &c);
    
    if(c==r)
    {
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)                  
        scanf("%d", &a[i][j]);       
    }
    
       for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)   
       { if(i==j)
          printf("%d ", a[i][j]);
       }      
    }
        printf("\n");
        
      for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)   
       { 
           if((i+j)==(r-1))
          printf("%d ", a[i][j]);
       }      
    }
      
        
    }
    else 
        printf("ERROR");
    return 0;
}
