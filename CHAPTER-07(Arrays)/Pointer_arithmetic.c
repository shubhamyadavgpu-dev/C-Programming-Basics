#include <stdio.h>
int main()
{
    int a;
    a = 8;
     int b;
    b = 6;
    int *ptr1 = &a;
    printf("The address of a is : %u\n", &a);
    printf("The address of b is : %u\n", &b);
    printf("The address of a using pointer ptr is : %u\n", ptr1);
    printf("The value of a using pointer ptr is : %u\n", *ptr1);
    ptr1++;
    printf("The vaue of ptr is : %u\n", ptr1);

    char m = 'A';
    char *ptr2 = &m;
    printf("The address of m is : %u\n", &m);
    printf("The address of a using pointer ptr is : %u\n", ptr2);
    ptr2++;
    printf("The vaue of ptr is : %u\n", ptr2);
    return 0;
}