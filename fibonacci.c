#include<stdio.h>
#include<conio.h>
int main()
{
    int pre=0,cur=1,temp,i,n;
    printf("Enter number");
    scanf("%d",&n);
    printf("%d\n%d",pre,cur);
    for(i=3;i<=n;i++)
    {
        temp=cur;
        cur=pre+cur;
        pre=temp;
        printf("\n%d",cur);
    }
    getch();
}
