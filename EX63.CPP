#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<iostream.h>
void main()
{
	clrscr();
	char str[30],txt[30],ctxt[30],ch;
	int i,l,x,a;
	cout<<"Enter string"<<endl;
	gets(str);
	l=strlen(str);
	_tolower(str);
	for(i=0;i<l;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			break;
		txt[i]=str[i];
	}
	for(x=0;i<l;i++,x++)
		ctxt[x]=str[i];
	for(a=0;x<l;x++,a++)
		ctxt[x]=txt[a];
	ctxt[x]='a';
	ctxt[x+1]='y';
	ctxt[x+2]='\0';
	cout<<"Piglatin=";
	puts(ctxt);
	getch();
}