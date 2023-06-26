#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int a;
	cout<<"Enter the numbers: ;";
	cin>>a;
	while(a>0)
	{
	   int rem=a%10;
		sum+=rem;
		a/=10;
	}
	cout<<"Ther digit summotion of:"<<a<<" is:"<<sum;
	return 0;
}
