#include<iostream>
using namespace std;
 int binarysearch(int a[],int f, int l,int x)
{
	int m=f+(l-1)/2;
	if(a[m]==x)
	    return m;
	else{
	 if(a[m]<x)
	     l=m+1;
	else if(a[m]>x)
	     l=m-1;
	else
	   return -1;
 }
}
int main()
{
	int n,arr[100];
	cout<<"Enter the range:";
	cin>>n;
	for(int i=0;i<n;i++){
	   cout<<"Enter the element"<<i+1<<":";
	   cin>>arr[i];}
	cout<<"\nBefore sorting the array:\n";
	for(int i=0;i<n;i++)
	  {
	  	 for(int j=0;j<n;j++)
	  	   {
	  	   	  if(arr[i]<arr[j])
                  swap(arr[i],arr[j]);
			 }
	  }
	cout<<"\nAfter sorting:";
	for(int i=0;i<n;i++)
      cout<<arr[i];
    int s;
    cout<<"\nEnter the element you want search:";
    cin>>s;
    int y=binarysearch(arr,0,n,s);
    (y==-1)?cout<<"\nElement is not found":cout<<"\nElement is found";
    return 0;
}
