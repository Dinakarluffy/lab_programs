#include<iostream>
using namespace std;
int main()
{
	int a[100][100],b[100][100],d[100][100];
	int r,c,p,q,i,j,k;
	cout<<"Enter the range of rows and  coloumns of matrix 1:";
	cin>>r>>c;
	for(int i=0;i<r;i++)
	 {
	 	for(int j=0;j<c;j++)
	 	 {
	 	 	cin>>a[i][j];
		  }
	 }
	cout<<"Enter the array elements:";
	 cout<<"Enter the range of rows and  coloumns of matrix 1:";
	cin>>p>>q;
	cout<<"Enter the array elements:";
	for(int i=0;i<p;i++)
	 {
	 	for(int j=0;j<q;j++)
	 	 {
	 	 	cin>>b[i][j];
		  }
	 }
    cout<<"The first matrix:"<<endl;
    for(int i=0;i<r;i++)
	 {
	 	for(int j=0;j<c;j++)
	 	 {
	 	 	cout<<a[i][j];
		  }cout<<endl;
	 }
     cout<<"The second matrix:"<<endl;
    for(int i=0;i<p;i++)
	 {
	 	for(int j=0;j<q;j++)
	 	 {
	 	 	cout<<b[i][j];
		  }cout<<endl;
	 }
    if(c!=p)
        cout<<"The first matrix coloumns and the second matrix rows are not equal so matrix multiplication is not possible";
	else
	  {
	  	cout<<"Matrix multiplication:";
	   } 
	  for(int i=0;i<r;i++)
	 {
	 	for(int j=0;j<q;j++)
	 	 {int sum=0;
           for(int k=0;k<r;k++)
            {
            	sum+=a[i][k]*b[k][j];
			}
		d[i][j]=sum;
		cout<<d[i][j]<<endl;
     }}
     return 0;
 }
