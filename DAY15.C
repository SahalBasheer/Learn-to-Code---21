//Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each occurrence of that element with its position(s).

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int c,r,i,j,a[10][10],x,m=0;
    scanf("%d", &r);
    scanf("%d", &c);
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)                  
        scanf("%d", &a[i][j]);       
    }
    scanf("%d", &x);
    
     for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++) 
       {
           if(a[i][j]==x)
           { printf("Element found at (%d,%d)\n",i,j);
           m=1;
           }
       }
        
    }
    if(m==0)
            printf("Element not found");
      
    return 0;
}
