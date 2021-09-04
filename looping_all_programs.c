#include<stdio.h>
int checkPrime(int num)
{
    int i;
    int flg = 0;
    /*if number (num) is divisble by any number from 2 to num/2
      number will not be prime.*/
    for (i = 2; i < (num - 1); i++) {
        if (num % i == 0) {
            flg = 1;
            break;
        }
    }
    if (flg)
        return 0;
    else
        return 1;
}
int main()
{
    //table from 1 to 20
    int a;
    for(int j=1;j<=20;j++)
    {
        a=j;
        printf("\n");
        for(int i=1;i<=10;i++)
        {
            printf("%d ",a*i);
        }
    }
    //factorial
    int b=1;
    printf("\nenter a number for factorial: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        b=b*i;         
    }
    printf("%d",b);
    //sum of first n numbers
    b=0;
    printf("\nEnter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        b=i+b;
    }
    printf("%d is total number",b);
    //prime number between 1 to n
    int i, n;

    printf("\nEnter the value of N: ");
    scanf("%d", &n);

    printf("All prime numbers are from 1 to %d:\n", n);
    for (i = 1; i <= n; i++)
    {
        if (checkPrime(i))
            printf("%d", i);
    }
    //print all odd number between 1 to n
    printf("\nEnter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            printf("%d ",i);
        }
    }
    //print all even number between 1 to n
    printf("\nEnter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    getch();
}