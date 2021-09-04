#include<stdio.h>
int cube(int a)
{
return(a*a*a);
}
int square(int a)
{
return(a*a);
}
int main()
{
int n;
printf("enter a number");
scanf("%d",&n);
printf("cube is %d\n",cube(n));
printf("square is %d",square(n));
}
