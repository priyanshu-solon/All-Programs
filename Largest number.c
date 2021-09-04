#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is bigger",a);
    }
    else if(a<b)
    {
        printf("%d is bigger",b);
    }
    else
    {
        printf("both are equal");
    }
     getch();


}
