#include<stdio.h>
int main()
{
    int g;
    printf("Enter your grade: ");
    scanf("%d",&g);
    if (g>95 && g<=100)
    {
        printf("Your grade is A+");
    }
    else if(g>=90 && g<=95)
    {
        printf("Your grade is A");
    }
    else if (g>=80 && g<90)
    {
        printf("Your grade is B");
    }
    else if (g>=70 && g<80)
    {
        printf("Your grade is C");
    }
    else {
        printf("Your grade is F");
    }

    return 0;
}