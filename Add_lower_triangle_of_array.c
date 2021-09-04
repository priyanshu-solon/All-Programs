#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,a[5][5],sum=0;
    printf("Enter the order of matrix: ");
    scanf("%d",&m);
    printf("Enter the Element of matrix: \n");
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            if(i>=j)
            sum+=a[i][j];
    printf("Sum of lower triangle is %d",sum);
    getch();

}