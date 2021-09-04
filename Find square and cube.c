#include<stdio.h>
#include<conio.h>
main()
{
    int n,square,cube;
    printf("Enter Number: ");
    scanf("%d",&n);
    square=n*n;
    cube=n*n*n;
    printf("\nsquare: %d\ncube: %d",square,cube);
    getch();
}
