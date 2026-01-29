#include<stdio.h>
int main()
{
    int a = 10 ;
    int b = 20;
    int c = a+b;
    printf("The sum of a %d and b %d is %d", a, b, c);
    int x = a % b ;
    printf("\nRemainder when a is divided by b is %d", x);
    return 0;
}

