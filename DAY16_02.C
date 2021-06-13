//Write a C program to find the minimum and maximum element of an array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,n,a[10],max,min;
       
    scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
    max=a[0];
    min=a[0];
    
    for (i = 0; i < n-1; i++)
    {
        if(max<a[i+1])
            max=a[i+1];
    }
    
      for (i = 0; i < n-1; i++)
    {
        if(min>a[i+1])
            min=a[i+1];
    }
    printf("%d\n", min);
    printf("%d", max);
    
    
    return 0;
}
