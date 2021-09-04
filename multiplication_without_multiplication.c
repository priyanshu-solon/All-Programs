#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("\nEnter two numbers to multiply: ");
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++)
    {
        c+=b;
    }
    printf("%d",c);
    getchar();
}