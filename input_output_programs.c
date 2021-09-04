#include<stdio.h>
#include<math.h>

int main()
{
    //hello world!
    printf("hello world!\n");
    //sum of two numbers
    int a,b,sum,avg;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum is %d\n",sum);
    avg=(a+b)/2;
    printf("average is %d\n",avg);
    //simple interest=(p*t*r)/100
    int principle,time,rate,SI;
    printf("enter principle,time,rate by spaces: ");
    scanf("%d %d %d",&principle,&time,&rate);
    SI=(principle*time*rate)/100;
    printf("Simple Interest is %d\n",SI);
    //odd even
    printf("enter a numbers: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    //largest in three numbers
    int c;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && b>=c)
    {
        printf("%d is largest",a);
    }
    else if(b>=c && a>=c)
    {
        printf("%d is largest",b);
    }
    else
    {
        printf("%d is largest",c);
    }
    //Fahr to Cels
    printf("\nEnter Fahrenheit: ");
    scanf("%d",&a);
    b=(a-32)*59;
    printf("In Celsius %d",b);
    //Cels to Fahr
    printf("\nEnter Celsius: ");
    scanf("%d",&a);
    b=a*(9/5)+32;
    printf("In Celsius %d",b);
    //power of a number
    printf("\nenter the number and its power: ");
    scanf("%d %d",&a,&b);
    printf("%d to %d is %lf",a,b,pow(a,b));
    //difference of two numbers
    printf("\nenter two numbers:");
    scanf("%d %d",&a,&b);
    c=a-b;
    if(c<0)
    {
        c=c*(-1);
    }
    printf("difference is %d",c);
    //sizeof()
    printf("\nenter a numbers:");
    scanf("%d",&a);
    printf("size of operator is %d",sizeof(a));
    //area & perimeter of circle
    // printf("enter radius of circle: ");
    // scanf("%d",&a);
    // b=3.14*a*a;
    // c=2*3.14*a;
    //printf("area of circle is%d\nperimeter of circle is %d",b,c);
    //area of rectangle
    printf("\nenter the height and weidth: ");
    scanf("%d %d",&a,&b);
    c=a*b;
    printf("%d is area of rectangle",c);
    //HCF
    //multiply by +
    printf("\nEnter two numbers to multiply: ");
    scanf("%d %d",&a,&b);
    for(int i=0;i<b;i++)
    {
        c+=a;
    }
    printf("%d",a);
    //global and local
    getch();
}