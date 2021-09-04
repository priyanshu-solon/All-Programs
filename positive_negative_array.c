#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],n,i,neg,pos;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&a[i]);
    }
    pos=neg=a[0];
    for(i=0;i<n;i++)
        if(a[i]>pos)
         printf("positive element%d:%d\n",i+1,a[i]);
    for(i=0;i<n;i++)
        if(a[i]<neg)
         printf("negative element%d:%d\n",i+1,a[i]);
    getch();
}