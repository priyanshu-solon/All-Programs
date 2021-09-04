/* C++ Program - Find Largest of Two Numbers */
#include<iostream>
using namespace std;
int main()
{
	int a, b, big;
	cout<<"Enter two number : ";
	cin>>a>>b;
	if(a>b)
	{
		big=a;
	}
	else
	{
		big=b;
	}
	cout<<"Biggest of the two number is "<<big;
}
