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
	cout<<"Enter the position you want to split:";
	cin>>p;
	for(int i=0;i<n;i++)
	{
     if(i<p)
       a1[k1++]=a[i];
     else
	   a2[k2++]=a[i];
    }
    cout<<endl<<"Elements of first splitting array:"<<endl;
    for(int i=0;i<k1;i++)
	{
      cout<<"\t"<<a1[i];
    }
	 cout<<endl<<"Elements of second splitting array:"<<endl;
    for(int i=0;i<k2;i++)
	{
      cout<<"\t"<<a2[i];
    }
    return 0;
}
