//Write a C Program to display the product of two 2D arrays. Given values for both the 2D Arrays.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

       
   
    int a[10][10],b[10][10],c[10][10];
    int m,n,x,y;
    int i,j;
    int sum=0;
    scanf("%d%d",&m,&n);
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    scanf("%d%d",&x,&y);
        for(i=0;i<x;i++)
        for(j=0;j<y;j++)
        scanf("%d",&b[i][j]);
    if(n!=x)
        printf("ERROR");
    else
    {
        { 
      for(i=0;i<m;i++)
      {for(j=0;j<y;j++)
        {
         for(int z=0;z<x;z++)
         sum=sum+(a[i][z]*b[z][j]);
         c[i][j]=sum;
         sum=0;
         }
        }
      }
      
      
    for(i=0;i<m;i++)
    {for(j=0;j<y;j++)
        printf("%d ",c[i][j]);
     printf("\n");
    }
    }
    return 0;
}
