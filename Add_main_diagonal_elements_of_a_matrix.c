#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,sum=0,a[5][5];
    printf("Enter the order of the matrix: ");
    scanf("%d",&m);
    printf("Enter the element of matrix: ");
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
        if(i==j)
        sum+=a[i][j];
    printf("Sum is %d",sum);
    getch();
}