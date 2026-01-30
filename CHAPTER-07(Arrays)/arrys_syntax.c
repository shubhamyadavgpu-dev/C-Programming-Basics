#include <stdio.h>
int main()
{
    int marks[90];
    //  printf("The size of marks array is : %d\n",sizeof(marks));
    marks[0] = 45;
    marks[1] = 78;
    marks[2] = 89;
    marks[90] = 9;
    printf("The marks of 0 1 2 and 89 is : %d %d %d %d \n", marks[0], marks[1], marks[2], marks[90]);

    return 0;
}