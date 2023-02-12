/*Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user*/

#include<stdio.h>
int main()
{
    int arr[10];
    printf("Enter ten elements for array\n");
    int i,sum=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    printf("Sum of array elements are = %d",sum);
    return 0;
}