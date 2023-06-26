#include<iostream>
using namespace std;
int main()
{
	int a,rem,sum=0;
	cout<<"Enter the number:";
	cin>>a;
	while(a>0)
	{
		rem=a%10;
		cout<<rem<<endl;
		sum=sum*10+rem;
		a/=10;
	}
	cout<<"the reverse word:"<<sum;
	return 0;
	
}
