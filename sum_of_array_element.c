#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,sum=0,a[20];
    printf("Enter the array elements");
    scanf("%d",&n);
    printf("Enter the Elements\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the Elements %d:",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum is %d",sum);
}