/*Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the size of array\n");
    scanf("%d",&num);
    int arr[num],i;
    printf("Enter the elements of the array\n");
    for(i=1;i<=num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Values of array in reverse order\n");
    for(i=num;i>=1;i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}