#include <stdio.h>
int main()
{
    int marks[]= {10, 20, 30, 40, 50};

    int *ptr = &marks[0];

    for(int i=0; i<5; i++)
    {
        printf("The value of marks at index %d is : %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}