#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,n,a[5][5],b[5][5],c[5][5];
    printf("Enter the order of matrix: \n");
    scanf("%d%d",&m,&n);
    printf("Enter the element of 1st matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element of 2nd matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
            
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
         c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Resultant matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    getch();
}