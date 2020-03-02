#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char s[1000];
	int x;
	cout<<"Enter string :";
	cin>>s;
	
	for(x=0;s[x]!='\0';++x);
	
	cout<<"The string length '"<<s<<"' is "<<x<<endl;
	return 0;
}
