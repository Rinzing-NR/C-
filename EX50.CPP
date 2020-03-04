#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,i,j,a=5;
	cout<<"Enter limit"<<endl;
	cin>>x;
	for(i=1;i<=x;i++,a--)
	{
		for(j=1;j<=x;j++)
		{
			if(j<=x-i+1)
				cout<<a<<" ";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	getch();
}