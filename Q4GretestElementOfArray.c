/*Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.
*/

#include<stdio.h>
int main()
{
    int arr[10],i,max=0;
    printf("Enter ten elements for array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("Maximum element of the array is = %d",max);
    return 0;
}