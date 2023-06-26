#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a[100];
	int n,i,k;
	cout<<"Enter the range: ";
	cin>>n;
	for(i=0;i<n;i++)
	 {	
	  cout<<"Enter the name "<<i+1<<":";
	  cin>>a[i];
	  cout<<endl;
	 }
	for(i=0;i<n;i++) 
	{
	  	for(k=0;k<n;k++)
          if(a[i]>a[k])
		  {
          	swap(a[i],a[k]);
          }
	}
    cout<<"After sorting:"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}
