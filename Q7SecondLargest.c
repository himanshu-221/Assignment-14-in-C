/*Write a program to find second largest in an array.Take array values from the user.*/

#include<stdio.h>
int main()
{
    int arr[5],i,j,max1=0,max2=0;
    printf("Enter five values for array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        if(max1<arr[i])
        {
            max2=max1;
            max1=arr[i];
        }
        else if(max2<arr[i])
        {
            max2=arr[i];
        }
    }

    printf("\n2nd gretest value is = %d",max2);
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
    
    //printf("\n2nd gretest value is = %d",arr[5-2]);
        
}