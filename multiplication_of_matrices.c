#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,k,a[5][5],b[5][5],c[5][5];
    printf("Enter the order of matrix: \n");
    scanf("%d",&m);
    printf("Enter the element of the 1st matrix: \n");
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    
    printf("Enter the element of the 2nd matrix: \n");
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
        scanf("%d",&b[i][j]);

    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
        {
            c[i][j]=0;
            for(k=0;k<m;k++)
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    printf("Resultant matrix is :\n");
    for (i = 0; i < m; i++)
    for ( j = 0; j < m; j++)
        printf("%d",c[i][j]);
    printf("\n");
    getch();
}