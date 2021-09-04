#include<stdio.h>
#include<conio.h>
main()
{
    int roll_no,m1,m2,m3,total;
    float average;
    printf("Enter roll number: ");
    scanf("%d",&roll_no);
    printf("Enter marks1 : ");
    scanf("%d",&m1);
    printf("Enter marks2 : ");
    scanf("%d",&m2);
    printf("Enter marks3 : ");
    scanf("%d",&m3);
    total=m1+m2+m3;
    average=total/3.0;
    printf("\nStudent Roll Number : %d",roll_no);
    printf("\nMarks 1 : %d",m1);
    printf("\nMarks 2 : %d",m2);
    printf("\nMarks 3 : %d",m3);
    printf("\nAverage : %f",average);
    getch();
}
