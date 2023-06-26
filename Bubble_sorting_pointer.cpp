#include<iostream>
#include<string>
using namespace std;
void sort(string *p,int n)
{
	for(int i=0;i<n;i++)
	{
	   for(int k=0;k<n;k++)
          if(*(p+i)>*(p+k))
		   {
          	swap(*(p+i),*(p+k));
           }
	}
}
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
    sort(a,n);
	cout<<"After sorting:"<<endl;
	for(i=0;i<n;i++)
	  cout<<a[i]<<endl;
    return 0;
}
