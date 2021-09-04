#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],n,i,max,min;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
         max=a[i];
        if(a[i]<min)
         min=a[i];
    }
    printf("Max Element is:%d\n",max);
    printf("Min ELement id:%d",min);
    getch();
}