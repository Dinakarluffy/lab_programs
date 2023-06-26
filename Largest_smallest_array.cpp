#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n,l,s;
	cout<<"Enter the range of array:";
	cin>>n;
	cout<<"Enter the array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	l=a[0];
	for(int i=0;i<n;i++)
      {
      	if(a[i]>l)
      	   {
      	   	l=a[i];
			 }
	  }
	  cout<<endl<<"The largest number of array is :"<<l<<endl;
    s=a[0];
	for(int i=0;i<n;i++)
      {
      	if(a[i]<s)
      	   {
      	   	s=a[i];
			 }
	  }
	  cout<<endl<<"The smallest number of array is :"<<s;
	  
	  return 0;
}
