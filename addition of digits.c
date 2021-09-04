#include<stdio.h>
#include<conio.h>
int main()
{
    int rem,sum=0,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n-n/10;
    }
    printf("Sum of Digits: %d",sum);
    getch();
}
