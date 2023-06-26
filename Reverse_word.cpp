#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word;
	cout<<"Enter a word or number:";
	getline(cin,word);
	int length=word.length();
	cout<<"The length of string is:"<<length<<endl;
	for(int i=0;i<length/2;i++)
	{
		char temp=word[i];
		word[i]=word[length-1-i];
		word[length-1-i]=temp;
	}
	cout<<"The reverse term is:"<<word;
	return 0;
}
