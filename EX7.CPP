#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x;
	cout<<"Enter a number"<<endl;
	cin>>x;
	if(x<0)
	{
		x=-x;
	}
	cout<<"Absolute value="<<x<<endl;
	getch();
}