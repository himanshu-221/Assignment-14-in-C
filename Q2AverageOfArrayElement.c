/*Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/

#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    printf("enter 10 values for array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    printf("Average is = %d",sum/10);
    return 0;

}