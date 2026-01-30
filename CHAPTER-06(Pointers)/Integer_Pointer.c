#include <stdio.h>
int main()
{
   char k = 'A';
   char* k1 = &k; // k1 is a pointer which is pointing to the address of k

    float i = 45.4;
    float* j = &i; // j is a pointer which is pointing to the address of i
    printf("The address of i is %u\n", &j);
     printf("The address of i is %u\n", &k);
    return 0;
}