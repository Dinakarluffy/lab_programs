#include<iostream>
using namespace std;
int main()
{
	int n,res;
	cout<<"Enter the number:";
	cin>>n;
	for(int i=2;i<n;i++)
	{
		if(n%2==0)
		  res=1;
		else
		  res=-1;
	}
	(res==1)?cout<<"The given number is not prime number":cout<<"The number is prime number";
	return 0;
	
}
