/*Write a program to sort elements of an array of size 10. Take array values from the
user.
*/
#include<stdio.h>
int main()
{
    int arr[10],i,j,temp;
    printf("Enter ten elements for array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Now sorted elements of the array are\n");
    i=0;
    while(i<9)
    {       
        for(j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        i++;
        
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}