#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter the array elements : \n");
    for(int i = 0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("The address of marks at index %d is : %u\n",i,(void *)&a[i]);
    }
  return 0;
}