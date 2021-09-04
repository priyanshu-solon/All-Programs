#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("enter the number and its power: ");
    scanf("%d %d",&a,&b);
    printf("%d to %d is %lf",a,b,pow(a,b));
}