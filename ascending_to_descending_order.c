#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,a[20],max,min,temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the Elments: \n");
    for(i=0;i<n;i++)
    {
        printf("Enter the Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Ascending order\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d:%d\n",i+1,a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {   temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Descending order\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d:%d\n",i+1,a[i]);
    }
    getch();
}