#include<iostream>
using namespace std;
int main()
{
	int a[100],a1[100],a2[100],k1=0,k2=0;
	int n,p;
	cout<<"Enter the array range:";
	cin>>n;
	cout<<"Enter the array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
    }
    cout<<"The array elements are:";
    for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
    cout<<endl<<"The reverse array elements are:";
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i];
	}
    return 0;
}
