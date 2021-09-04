#include<stdio.h>
#include<string.h>
#define MAX 100
int push(int *s, int top, int ele)
{
 int i;
 if (top >= MAX)
 {
 printf("\nStack Overflow");
 }
 else
 {
 s[++top] = ele;
 }
 return top;
}
int pop(int *a, int *top)
{
 if ((*top) >= 0)
 {
 (*top) = (*top) - 1;
 return a[(*top) + 1];
 }
 else
 {
 printf("Stack underflow\n");
 return 0;
 }
}
void main()
{
 int n,i,s[MAX],ans = 1,TOP = -1;
 printf("\nEnter number: ");
 scanf("%d",&n);
 if(n<=0)
 {
 printf("\nThe number can not be less than 0");
 }
 else
 {
 for(i = n ; i >0 ; i--)
 {
 TOP = push(s,TOP, i);
 }
 while(TOP>=0)
 {
 ans = ans * pop(s,&TOP);
 }
 printf("\nFactorail is %d\n",ans);
 }
}
