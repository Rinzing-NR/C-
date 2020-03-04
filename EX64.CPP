#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<iostream.h>
void main()
{
	clrscr();
	char str[30],txt[30];
	int l1,l2;
	cout<<"Enter string 1"<<endl;
	gets(str);
	cout<<"Enter string 2"<<endl;
	gets(txt);
	l1=strlen(str);
	l2=strlen(txt);
	if(l1>l2)
		cout<<str<<" is longer";
	else if(l2>l1)
		cout<<txt<<" is longer";
	else
		cout<<"Both are equal";
	getch();
}