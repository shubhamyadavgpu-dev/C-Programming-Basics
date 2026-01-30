#include<stdio.h>
int main ()
{
    int i;
    i=45;
    int* j = &i;     // j is a pointer which is pointing to the address of i
    printf("The address of i is %u\n",j);
    //printf("The address of i is %u\n",&i);


    printf("The Value at address of j is %u\n",*(&i)); // dereferencing the address of i
    return 0;
}