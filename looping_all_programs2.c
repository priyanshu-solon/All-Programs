#include <stdio.h>
#include<math.h>
/*function to check Armstrong Number */
int checkArmstrong(int num)
{
    int tempNumber, rem, sum;
    tempNumber = num;

    sum = 0;
    while (tempNumber != 0) {
        rem = tempNumber % 10;
        sum = sum + (rem * rem * rem);
        tempNumber /= 10;
    }
    /* checking number is Armstrong or not */
    if (sum == num)
        return 1;
    else
        return 0;
}

int main()
 {
    int i, n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("All Armstrong numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        if (checkArmstrong(i))
            printf("%d,", i);
    }
    //print square,cube,sqrt from 1 to n
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    for(int i=1;i<n+1;i++)
    {
        printf("\n%d square=%d cube=%d sqrt=%lf",i,i*i,i*i*i,sqrt(i));
    }
    //print leap year from 1 to n
    printf("\nEnter a year: ");
    scanf("%d\n",&n);
    for(int i=1;i<n+1;i++)
    {
        if(i%4==0)
        {
            printf("%d\n",i);
        }
    }
    //print all upper and lower case alphabets
    for(char i='A';i<='Z';i++)
    {
        printf("%c",i);
    }
    printf("\n");
    for(char i='a';i<='z';i++)
    {
        printf("%c",i);
    }
getch();
}