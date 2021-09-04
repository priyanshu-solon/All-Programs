#include<stdio.h>
int main()
{
	int p,r,t,si;
	printf("enter principal,rate of intrest &time to find simple intrest:");
	scanf("%d%d%d",&p,&r,&t);
	si=(p*r*t)/100;
	printf("simple intrest=%d",si);
}
