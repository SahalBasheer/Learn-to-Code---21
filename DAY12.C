//Write a C program to check whether a number present in the 1D array or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a[5],i,x,p,n;
    scanf("%d", &n);
    for (i=0;i<n;i++)
        {
        scanf("%d", &a[i]);
        }
    scanf("%d", &x);
    for(i=0;i<n;i++)
        {
        if(x==a[i])
            p=a[i];
        }
    if(p==x)
        printf("%d is present in this array",x);
    else 
        if(p!=x)
        printf("%d is not present in this array",x);
    return 0;
}
