#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter two numbers:\n");
    scanf("%d %d",&i,&j);
    printf("%d is i AND %d is j\n",i,j);
    i+=j;   //i=3 //i=i+j
    j=i-j;   //j=1  
    i-=j;     //i=2  //i=i-j
    printf("After SWAP\n%d is i AND %d is j",i,j);
}