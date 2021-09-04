#include<stdio.h>
int main()
{
    int n,k,i,j;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
     getch();

}
