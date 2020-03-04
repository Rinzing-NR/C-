#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x;
	cout<<"Enter number"<<endl;
	cin>>x;
	if(x%7==0&&x%10==7)
	{
		cout<<x<<" is buzz"<<endl;
	}
	else
	{
		cout<<x<<" is not buzz"<<endl;
	}
	getch();
}