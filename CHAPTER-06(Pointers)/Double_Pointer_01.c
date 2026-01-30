#include<stdio.h>
int main ()
{
    int i;
    i=45;
    int* j = &i;   // j is a pointer which is pointing to the address of i
    printf("The value of i is %d\n",i);
    //printf("The value of i is %d\n",*(j));
    printf("The address of i is %p\n",i);
    
    return 0;
}