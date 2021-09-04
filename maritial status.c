#include<stdio.h>
int main()
{
    int age;
    char status,Gender;
    printf("Input your Age\nAre you married(Y,N)\nInput your Gender(M,F)\n(eg.25 N M):");
    scanf("%d %c %c",&age,&status,&Gender);
    if(status=='Y')
    {
        printf("You are not eligible!");
    }
    else if(status=='N')
    {
        if(Gender=='M')
        {
            if(age>=21)

                printf("You are eligible!");
            else
                printf("You are not eligible!");
        }
        else if(Gender=='F')
        {
            if(age>=18)

                printf("You are eligible!");
            else
                printf("You are not eligible!");
        }
        else
        printf("invalid input...");
    }
    else
        printf("invalid input...");
         getch();


}
