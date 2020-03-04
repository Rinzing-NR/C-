#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
class over
{
	public:
	void compare(int,int);
	void compare(char,char);
	void compare(char[],char[]);
}obj;
void over::compare(int x,int y)
{
	if(x>y)
		cout<<x<<" is greater"<<endl;
	else if(y>x)
		cout<<y<<" is greater"<<endl;
	else
		cout<<"Both are same"<<endl;
}
void over::compare(char a,char b)
{
	if((int)a>(int)b)
		cout<<a<<" is greater"<<endl;
	else if((int)b>(int)a)
		cout<<b<<" is greater"<<endl;
	else
		cout<<"Both are same"<<endl;
}
void over::compare(char str[],char txt[])
{
	if(strlen(str)>strlen(txt))
		cout<<str<<" is greater"<<endl;
	else if(strlen(txt)>strlen(str))
		cout<<txt<<" is greater"<<endl;
	else
		cout<<"Both are same"<<endl;
}
void main()
{
	clrscr();
	int x,y;
	char a,b,str[30],txt[30];
	cout<<"Enter x & y"<<endl;
	cin>>x>>y;
	cout<<"Enter a & b"<<endl;
	cin>>a>>b;
	cout<<"Enter str & txt"<<endl;
	gets(str);
	gets(txt);
	obj.compare(x,y);
	obj.compare(a,b);
	obj.compare(str,txt);
	getch();
}