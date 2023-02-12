/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.
*/

#include<stdio.h>
int main()
{
    int arr[10],i,sumodd=0,sumeven=0;
    printf("Enter ten elements for the array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            sumeven+=arr[i];
        }
        else{
            sumodd+=arr[i];
        }
    }
    printf("Sum of even element is = %d\n",sumeven);
    printf("Sum of odd element is = %d\n",sumodd);
    return 0;
}