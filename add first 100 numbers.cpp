#include<iostream>

using namespace std;

int main()
{
	int i,n=100,sum=0;
	cout<<"Sum of first 100 natural number is ";

	for(i=1;i<=n;++i)
	{
		sum+=i;
	}

	cout<<"Sum="<<sum;
	return 0;
}
