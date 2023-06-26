#include<iostream>
using namespace std;
int main()
{
	int a,rem,sum=0;
	cout<<"Enter the number:";
	cin>>a;
	int temp=a;
	while(a>0)
	{
		rem=a%10;
		sum+=(rem*rem*rem);
		a/=10;
	}
	if(sum==temp)
	  cout<<"The given number "<<temp<<" is armstrong number";
	else 
	cout<<"The given number "<<temp<<" is not armstrong number";
	return 0;
}
