#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter value of n");
    scanf("%d",&n);
    i=n;
    do
    {
        printf("%d\n",i);
        i--;
    }while(i>=1);
     getch();

}
