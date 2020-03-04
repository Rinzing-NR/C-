#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b;
	cout<<"Enter 2 numbers"<<endl;
	cin>>a>>b;
	if(a>b)
	{
		cout<<a<<" is larger"<<endl;
	}
	else if(b>a)
	{
		cout<<b<<" is larger"<<endl;
	}
	else
	{
		cout<<"Both are equal"<<endl;
	}
	getch();
}