#include<stdio.h>
int main()
{
    int roll,n1,n2,n3,avg,total,perc;
    printf("Enter your roll number...");
    scanf("%d",&roll);
    printf("Enter marks of three subjects separated by space...");
    scanf("%d %d %d",&n1,&n2,&n3);
    total=n1+n2+n3;
    avg=total/3;
    perc=(total*100)/300;
    if(perc>=60)
    {
        printf("\nA Grade\n");
        printf("\n%d marks in 300\n",total);
    }
    else if((perc<60)&&(perc>=50))
    {
        printf("\nB Grade\n");
        printf("\n%d marks in 300\n",total);
    }
    else if((perc<50)&&(perc>=40))
    {
        printf("\nC Grade\n");
        printf("\n%d marks in 300\n",total);
    }
    else
    {
        printf("\nD Grade\n");
        printf("\n%d marks in 300\n",total);
    }
    printf("\nYour Roll number is %d\n",roll);
    printf("\nAverage mark is %d\n",avg);
    printf("\n%d percent\n",perc);
    printf("\ntotal is %d\n",total);
    getch();
}
