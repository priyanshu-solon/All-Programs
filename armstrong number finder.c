#include<stdio.h>
#include<conio.h>
int main()
{
    int temp,rem,sum=0,n;
    printf("Enter n :");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum)
        printf("It is an armstrong number");
    else
        printf("It's not an armstrong number");
        getch();
}
