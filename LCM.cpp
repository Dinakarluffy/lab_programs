#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the numbers:";
	cin>>a>>b;
	int max=(a>b)?a:b;
	while(true){
		if(max%a==0 && max%b==0 ){
			cout<<"LCM="<<max;
			break;
		}
		else
		  ++max;
	}
	return 0;
}
