#include<stdio.h>
int main()
{
	int a,b,c;printf("enter value of a,b,c:");scanf("%d%d%d",&a,&b,&c);if((a>b)&&(a>c))printf("a is the greatest");if((b>c)&&(b>a))printf("b is the greatest");if((c>a)&&(c>b))printf("c is the greatest");}
