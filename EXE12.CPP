#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<iostream.h>
class over
{
	public:
	void check(char[],char);
	void check(char[]);
}obj;
void over::check(char str[],char ch)
{
	int i,l,c=0;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]==ch)
			c++;
	}
	cout<<"Frequency="<<c<<endl;
}
void over::check(char s1[])
{
	int i,l;
	l=strlen(s1);
	for(i=0;i<l;i++)
	{
		s1[i]=_tolower(s1[i]);
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
			cout<<s1[i]<<" ";
	}
}
void main()
{
	clrscr();
	obj.check("success",'s');
	obj.check("COMPUTER");
	getch();
}