#include<stdio.h>
int add(int *a,int *b)
{
    int c=*a+*b;
    return c;
}

int main()
{
    int a=10,b=10,c;
    c=add(&a,&b);
    printf("%d",c);
}
