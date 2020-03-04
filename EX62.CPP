#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
	clrscr();
	char str[30],rev[30];
	int i;
	cout<<"Enter string"<<endl;
	gets(str);
	strcpy(rev,str);
	strrev(str);
	if(strcmp(str,rev)==0)
		cout<<"Palindrome"<<endl;
	else
		cout<<"Not Palindrome"<<endl;
	getch();
}
