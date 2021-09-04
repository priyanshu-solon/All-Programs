#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number of array elements: ");
    scanf("%d",&N);
    int a[N],SUM=0;
    printf("Enter %d numbers \n",N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        SUM+=a[i];
    }
    printf("Sum of all numbers in array is ");
    printf("%d",SUM);
    getchar();
}