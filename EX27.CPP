#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,s=0,r;
	cout<<"Enter number"<<endl;
	cin>>x;
	while(x>0)
	{
		r=x%10;
		s=s+r;
		x=x/10;
	}
	cout<<"Sum of digits="<<s;
	getch();
}