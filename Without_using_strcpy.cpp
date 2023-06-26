#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int m=100,i;
	char s1[]="Hello asta";
	char s2[m];
	 for( i=0;i<strlen(s1);i++)
	    s2[i]=s1[i];
	    s2[i]='\0';
	 cout<<"Copying without using builtin function:"<<s2<<endl;
	 strcpy(s2,s1);
	 cout<<"Copying with using builtin function:"<<s2<<endl;
	 return 0;
}
