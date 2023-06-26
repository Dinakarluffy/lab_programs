#include<iostream>
using namespace std;
int main()
{
	int a[100][100],sum=0;
	int r,c;
	cout<<"Enter the range of rows and  coloumns of matrix 1:";
	cin>>r>>c;
	cout<<"Enter the array elements:";
	for(int i=0;i<r;i++)
	 {
	 	for(int j=0;j<c;j++)
	 	 {
	 	 	cin>>a[i][j];
		  }
	 }
    cout<<"The matrix is:"<<endl;
    for(int i=0;i<r;i++)
	 {
	 	for(int j=0;j<c;j++)
	 	 {
	 	 	cout<<a[i][j];
		  }cout<<endl;
	 }
    if(r!=c){
    	cout<<"The matrix rows and coloumns are not equal so diagonal addition of matrix is not possible";
	}
	else
	{
		cout<<"The daigonal addition of matrix:";
	     for(int i=0;i<r;i++)
	   {
	 	for(int j=0;j<c;j++)
	      {
	      	if (i==j)
	      	{
	      		sum+=a[i][j];
			  }
		  }
    	}
   }
	cout<<sum;
	return 0;
}
