//Write a C program to check whether a given number is amstrong or not.

//Note: Amstrong numbers are numbers that are equal to sum of cubes of its digits.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,x,r,y;
    scanf("%d",&n);
  x=n;
    y=0;
    
    while(x!=0)
    {
        r=x%10;
        y=y+(r*r*r);
        x=x/10;
    }
    
     if(y==n)
       printf("Amstrong");
    else
        printf("Not Amstrong");
      
    return 0;
}
