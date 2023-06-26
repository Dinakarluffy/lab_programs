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
	cout<<"The transpose matrix is:";
    for(int i=0;i<c;i++)
	 {
	 	for(int j=0;j<r;j++)
	 	{
	 		cout<<"\t"<<a[j][i];
		 }
        cout<<endl;
    }
	return 0;	}
