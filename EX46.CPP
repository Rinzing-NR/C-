#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,i,j,a=0;
	cout<<"Enter limit"<<endl;
	cin>>x;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=x;j++)
		{
			if(j<=i)
			{
				cout<<a<<" ";
				a=a+3;
			}
			else
				cout<<" ";
		}
		cout<<endl;
	}
	getch();
}
