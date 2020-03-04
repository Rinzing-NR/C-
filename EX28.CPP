#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,r,rev=0;
	cout<<"Enter number"<<endl;
	cin>>x;
	while(x>0)
	{
		r=x%10;
		rev=rev*10+r;
		x=x/10;
	}
	cout<<"Reverse="<<rev;
	getch();
}