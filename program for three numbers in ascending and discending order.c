#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    printf("Enter numbers ....");
    scanf("%d%d%d",&a,&b,&c);
    if((a>=b)&&(a>=c))
    {
        if(b>=c)
        {
            printf("\n Descending order : %d %d %d",a,b,c);
            printf("\n Ascending order : %d %d %d",c,b,a);
        }
        else
        {
            printf("\n Descending order : %d %d %d",a,c,b);
            printf("\n Ascending order : %d %d %d",b,c,a);
        }
    }
    else if((b>=a)&&(b>=c))
    {
        if(a>=c)
        {
            printf("\n Descending order : %d %d %d",b,a,c);
            printf("\n Ascending order : %d %d %d",c,a,b);
        }
        else
        {
          printf("\n Descending order : %d %d %d",b,c,a);
          printf("\n Ascending order : %d %d %d",a,c,b);
        }
    }
    else if ((c>=a)&&(c>=b))
    {
        if(a>=b)
        {
            printf("Descending order : %d %d %d",c,a,b);
            printf("Ascending order : %d %d %d",b,a,c);
        }
        else
        {
            printf("Descending order : %d %d %d",c,b,a);
            printf("Ascending order : %d %d %d",a,b,c);
        }
    }
    getch();
}
