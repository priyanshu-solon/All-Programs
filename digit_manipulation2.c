#include<stdio.h>
#include<math.h>

int main()
{
    //number of digts in a number
    int a,b=0,c=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter the number to find: ");
    scanf("%d",&b);
    while(a>0){
        if(a%10==b){
            c++;
        }
        a=a/10;
    }
    printf("%d",c);

    //perfect square
    printf("\nEnter a number:");
    scanf("%d",&a);
    if(sqrt(a)*sqrt(a)==a)
    {
        printf("perfect square");
    }
    else
    {
        printf("not perfect square");
    }
    getch();
}