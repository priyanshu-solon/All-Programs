#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number");
    scanf("%d",&i);
    if(i<=10)
    goto hello;
    printf("Ok\t");
    hello:
    printf("hello");
    getch();
}
