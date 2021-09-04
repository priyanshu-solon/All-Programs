#include<stdio.h>
int main()
{
    int a;
    printf("Enter a numbers: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is Positive",a);
    }
    else if(a<0)
    {
        printf("%d is Negative",a);
    }
    else
    {
        printf("0");
    }
 getch();

}
