/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.
*/

#include<stdio.h>
int main()
{
    int arr[10],i,min;
    printf("enter ten elements for the array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[1];
    for(i=0;i<10;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("smallest element of the array is = %d",min);
    return 0;
}