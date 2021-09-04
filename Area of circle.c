#include<stdio.h>
int main()
{
    float Area,R;
    printf("Enter the radius of square :");
    scanf("%f",&R);
    Area=3.14*R*R;
    printf("Area of circle is %6.2f",Area);
    getch();
}
