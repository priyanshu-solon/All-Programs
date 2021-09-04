#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,n,a[5][5];
    printf("Enter the order of elements: \n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("\nMatrix Entered\n");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    printf("%d",a[i][j]);
    printf("\n");
    }
    getch();

}