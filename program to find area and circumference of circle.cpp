#include<stdio.h>
int main()
{
	int r;
	float pi=3.14,area,ci;
	printf("enter radius of circle:");
	scanf("%d",&r);
	area=pi*r*r;
	printf("area of circle=%f",area);
	ci=2*pi*r;
	printf("circumference=%f",ci);
}
