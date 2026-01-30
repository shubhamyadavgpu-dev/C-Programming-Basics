#include<stdio.h>
int sum(int a, int b);

int sum(int a,int b)
    {
        return a+b;
    }
int main(){
    int a,b;
    printf("Enter two numbers to find sum:");
    scanf("%d %d",&a,&b);
    printf("The sum of %d and %d is : %d\n",a,b,sum(a,b));
     return 0;
}