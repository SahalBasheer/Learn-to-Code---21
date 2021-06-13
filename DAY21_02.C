//Write a C program to find the number of prime numbers in a array of integers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int prime(int n)
{
     for(int j=2;j<n;j++)
        { if(n%j==0)
         return 1;
        }
    return 0;
}

int main() {
int n,arr[100],i,b;
    b=0;
    
     scanf("%d", &n);
    for(i=0;i<n;i++)
    { scanf("%d", &arr[i]);
    
      if(prime(arr[i])==0)
            b++;
        
    }
      printf("%d",b);
    return 0;
}

