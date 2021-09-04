#include<stdio.h>
int main()
{
    float area,breadth,height;
    printf("Enter breadth of triangle: ");
    scanf("%f",&breadth);
    printf("Enter length of triangle: ");
    scanf("%f",&height);
    area=0.5*breadth*height;
    printf("Area of triangle is: %6.2f",area);
    getch();
}
