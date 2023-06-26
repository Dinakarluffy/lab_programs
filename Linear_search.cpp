#include<iostream>
using namespace std; 
int linear(int a[],int v,int n){
	int i;
	for(int i=0;i<v;i++)
	  if(a[i]==n)
	 	    return i;
	  return -1;
}
int main()
{
	int a[100],n,x,res,i;
	cout<<"Enter the range:";
	cin>>n;
	for(int i=0;i<n;i++)
	 {
	 	cout<<"Enter the number "<<i+1<<":";
	 	cin>>a[i];
	 }
	 cout<<"\nEnter the element you want search:";cin>>x;
	res=linear(a,n,x) ;	
	(res==-1)?cout<<"Element is not present":cout<<"Element is present"<<res;
	 return 0;
}
