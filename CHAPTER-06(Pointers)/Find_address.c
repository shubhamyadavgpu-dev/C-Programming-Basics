#include <stdio.h>

int main() {
    int a = 5;       // ek normal integer variable
  //  int *p;          // ek pointer variable (int type ka)

   // p = &a;          // 'a' ka address pointer 'p' me store kiya

    printf("Value of a is = %d\n", a);
     printf("The address of a is = %u\n", &a);
    return 0;
}