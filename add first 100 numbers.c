#include<iostream>
using namespace std;

int main()
{
	int i,n,sum=0;
	cout<<"How many numbers? ";
	cin>>n;

	for(i=1;i<=n;++i)
	{
		sum+=i;
	}

	cout<<"Sum="<<sum;
	return 0;
	getch();
}
