#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,i,s=0;
	cout<<"Enter your value"<<endl;
	cin>>x;
	for(i=1;i<x;i++)
	{
		if(x%i==0)
			s=s+i;
	}
	if(s==x)
		cout<<"Perfect"<<endl;
	else
		cout<<"Not Perfect"<<endl;
	getch();
}