#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
class over
{
	public:
	void Joystring(char[],char,char);
	void Joystring(char[]);
	void Joystring(char[],char[]);
}obj;
void over::Joystring(char s[],char ch1,char ch2)
{
	int l,i;
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]==ch1)
			s[i]=ch2;
	}
	cout<<s<<endl;
}
void over::Joystring(char s[])
{
	int x,y,l,i;
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]==' ')
			x=i;
	}
	for(i=l-1;i>=0;i--)
	{
		if(s[i]==' ')
			y=i;
	}
	cout<<"First index="<<x<<endl;
	cout<<"Last index="<<y<<endl;
}
void over::Joystring(char s1[],char s2[])
{
	char s[70];
	int i,j;
	for(i=0;i<strlen(s1);i++)
		s[i]=s1[i];
	s[i]=' ';
	i++;
	for(j=0;j<strlen(s2);j++,i++)
		s[i]=s2[j];
	s[i]='\0';
	puts(s);
	cout<<endl;
}
void main()
{
	clrscr();
	obj.Joystring("TECHNALAGY",'A','O');
	obj.Joystring("Cloud computing means Internet based computing");
	obj.Joystring("Common Wealth","Games");
	getch();
}
