#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
    //only for year and month
int birthmonth,birthyear;
int currentmonth,currentyear;
int age_y,age_m;
cout<<"\n\n\t\t\tRaje's Age Calculator\n\n";
cout<<"Enter Your Birth Year(Eg:1989):";
cin>>birthyear;
cout<<"\n\nEnter Your Birth Month(Eg:7):";
cin>>birthmonth;
cout<<"\nEnter The Current Month(Eg:7):";
cin>>currentmonth;
cout<<"\nEnter The Current Year(Eg:2010):";
cin>>currentyear;
age_y=currentyear-birthyear;
age_m=12-birthmonth;
cout<<"\n\n\t\tYour Age is "<<age_y<<" Years And "<<age_m<<" Months ";
getch();
}
