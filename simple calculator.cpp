#include<iostream> 
using namespace std;
main()
{
	int a,b,add,sub,mult;
	float divd;
	char ch;
	
	cout<<"Enter First Number: ";
	cin>>a;
	
	cout<<"Enter Second Number: ";
	cin>>b;
	
	cout<<"Enter any operator '+, -, / , x' :";
	cin>>ch;
	
	mult=a*b;
	divd=a/(float)b;
	add=a+b;
	sub=a-b;
	
	if(ch=='x')
	cout<<"your multiplication number is: "<<mult<<"\n";
	
	else if(ch=='/')
	cout<<"your division number is: "<<divd<<"\n";
	
    else if(ch=='+')
    cout<<"your addition number is: "<<add<<"\n";
	
    else if(ch=='-')
	cout<<"your subtraction number is: "<<sub<<"\n";
	
	else
    cout<<"Wrong Operator";
	
}

	
