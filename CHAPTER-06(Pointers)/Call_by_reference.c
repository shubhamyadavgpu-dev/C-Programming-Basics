#include<stdio.h>
int sum(int* a, int* b);

int sum(int* a,int* b)
    {
        *a=4;
        return (*a+*b);
    }
int main(){
    int a =5,b=5;
    printf("The sum of %d and %d is : %d\n",a,b,sum(&a,&b));
     return 0;
}