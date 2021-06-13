//Write a C program to find the second maximum element in an array of integer elements

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

       int i,n,a[10],max,max2;
       
    scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
    max=a[0];
    max2=a[0];
   
    
    for (i = 0; i < n-1; i++)
    {
        if(max<a[i+1])
            max=a[i+1];
    }
    
    for (i = 0; i < n-1; i++)
    {
        if(max2<a[i+1] && max>a[i+1])
            max2=a[i+1];
        if(max2==max)
            max2=a[i+1];
    }
    printf("%d",max2);
    
   
    
    return 0;
}
