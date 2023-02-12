/* Write a program in C to copy the elements of one array into another array.Take array
values from the user*/

#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],i;
    printf("Enter five elements for the array 1\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("values of first array\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr1[i]);
    }

    printf("\nvalues of second array after copy from first array\n");
    for(i=0;i<5;i++)
    {
        arr2[i]=arr1[i];
        printf("%d\t",arr2[i]);
    }
    return 0;
}