//Write a C program to input two numbers.If sum of the numbers is even, find the reverse of the sum .If sum is odd check whether the sum is prime or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a,b,s,t,r,i;
    t=0;
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("%d",s);
    if(s%2==0)
    {
        while(s!=0)
    {  
        r=s%10;
        s=s/10;
        t=t*10+r;
    }
        printf("\n%d",t);     
    }
    else
    {
        for(i=2;i<=(s+1)/2;i++)
        { if(s%i==0)
         t=1;
        }
        if(t!=0)
            printf("\nNot prime");
        else
            printf("\nPrime");
    }
      
    return 0;
}
