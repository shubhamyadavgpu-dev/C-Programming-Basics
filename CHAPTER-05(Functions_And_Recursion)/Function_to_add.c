#include<stdio.h>
int sum(int , int);

//Function definition
int sum(int x, int y)
{
    printf("The sum is : %d\n", x+y);
    return x+y;
}

int main ()
{
    int a,b;
    a=5;
    b=6;
    sum(a,b);
    return 0;
}

