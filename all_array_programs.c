#include<stdio.h>
#include<conio.h>
int main()
{
    // //Program to read and print one dimensional array.
    // int arr[5];
    // printf("Enter the number in array: ");
    // for(int i=0;i<5;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    // printf("Element entered ");
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    // //Program to calculate Sum, Product of all elements.
    int arr[5];
    printf("Enter the number in array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,product=1;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    printf("sum of elements: %d",sum);
    for(int i=0;i<5;i++)
    {
        product*=arr[i];
    }
    printf("\nproduct of elements: %d",product);
    getch();
}