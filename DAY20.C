//Write a C program to find the factorial of a given number using a recursive function

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int n)
{
    if(n==0)
        return 1;
    else 
        return n*fact(n-1);
}

int main() {
int n,m;
    scanf("%d",&n);
    if(n>=0)
    {
    m=fact(n);
  printf("%d",m);
}
   else
    printf("ERROR");

    return 0;
}
