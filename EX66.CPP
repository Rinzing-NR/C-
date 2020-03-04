#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<iostream.h>
void main()
{
	clrscr();
	char str[10][30],t[30];
	int i,n,j;
	cout<<"Enter size"<<endl;
	cin>>n;
	cout<<"Enter names"<<endl;
	for(i=0;i<n;i++)
		gets(str[i]);
	cout<<"vowels:"<<endl;
	for(i=0;i<n;i++)
	{
		if(str[i][0]=='a'||str[i][0]=='e'||str[i][0]=='i'||str[i][0]=='o'||str[i][0]=='u')
			puts(str[i]);
	}
	getch();
}
