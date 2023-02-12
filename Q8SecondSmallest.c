/*Write a program to find the second smallest number in an array.Take array values
from the user.*/

#include<stdio.h>
int main()
{
    int arr[5],i,j,min1,min2;
    printf("Enter five values for array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    min1=arr[0];
    min2=arr[1];
    for(i=0;i<5;i++)
    {
        if(min1>=arr[i])
        {
            min2=min1;
            min1=arr[i];
        }
        else if(min2>arr[i])
        {
            min2=arr[i];
        }
    }
    printf("\n2nd smallest value is = %d",min2);
    // int temp;
    // for(i=0;i<4;i++)
    // {
    //     for(j=i+1;j<5;j++)
    //     {
    //         if(arr[i]>arr[j])
    //         {
    //             temp=arr[i];
    //             arr[i]=arr[j];
    //             arr[j]=temp;
    //         }
    //     }
    // }
    // for(i=0;i<5;i++)
    // {
    //     printf("%d\t",arr[i]);
    // }
    
    // printf("\n2nd smallest value is = %d",arr[1]);
    return 0;
}