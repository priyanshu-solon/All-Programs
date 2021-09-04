#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
        {
            printf("Not prime");
            exit(0);
        }

        }    printf("Prime");
         getch();

}
