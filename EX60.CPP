#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
	clrscr();
	char str[30],ch;
	int i,l,c=0;
	cout<<"Enter string"<<endl;
	gets(str);
	l=strlen(str);
	_tolower(str);
	for(i=0;i<l;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			c++;
	}
	cout<<"Vowels="<<c;
	getch();
}
