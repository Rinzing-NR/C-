#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,i;
	long f=1;
	cout<<"Enter number"<<endl;
	cin>>x;
	for(i=2;i<=x;i++)
		f=f*i;
	cout<<"Factorial="<<f;
	getch();
}