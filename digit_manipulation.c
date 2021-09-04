#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    //reverse a number
    printf("Enter a number: ");
    scanf("%d",&a);
    b=a%10;
    while(a>0)
    {
        b=a%10;
        printf("%d",b);
        a=a/10;
    }
    //program to calculate Sum & product of all digit
    printf("\nEnter two number: ");
    scanf("%d %d",&a,&b);
    printf("sum =%d product=%d",a+b,a*b);
    //Program to check number is prime or not.
    // printf("\nEnter a number: ");
    // scanf("%d",&a);
    // for(int i=2;i<a;i++);
    // {
    //     if(a%i==0)
    //     {
    //         printf("not prime");
    //     }
    //     else
    //     {
    //         printf("prime");
    //     }
    // }
    //program to find number of digits
    printf("\nEnter the number: ");
    scanf("%d",&a);
    b=0;
    while(a>0)
    {
        b++;
        a=a/10;
    }
    printf("number of digits are %d",b);
    getch();
}