#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    getch();
}
