//WACP to determine if a triangle is valid from the given sides.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a+b>c && b+c>a && c+a>b)
        printf("Yes");
    else 
        printf("No");
    return 0;
}
