#include<iostream>
using namespace std;
int main()
{
	int a[100],a1[100],a2[100],k1=0,k2=0,j;
	int n,p;
	cout<<"Enter the array range:";
	cin>>n;
	cout<<"Enter the array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
     	for( j=0;j<k1;j++)
    	{ 
          if(a[i]==a1[j])
	        break;
	    }
	    if(j==k1){
	    	a1[k1]=a[j];
	    	k1++;
		}
	}
	cout<<"After deletion:"<<endl;
		for(int i=0;i<k1;i++)
	{
          cout<<a1[i];}
          return 0;
      }

