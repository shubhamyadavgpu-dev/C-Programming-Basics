#include <stdio.h>
int main()
{

    int i = 45;
    int *j = &i;
    int **k = &j;

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(&j));// * , & cancel each other by
    // serial wise only *j is save
         return 0;
}