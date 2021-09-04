#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a[20];
    printf("Enter a number");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the elements %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
        printf("\nEntered element %d:%d",i+1,a[i]);
    getch();
}