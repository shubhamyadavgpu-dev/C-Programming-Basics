#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter anumber where you want to print a number till:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}