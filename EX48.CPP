#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,i,j,a=1;
	cout<<"Enter limit"<<endl;
	cin>>x;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=x;j++)
		{
			if(j<=i)
			{
				cout<<a<<" ";
				a++;
			}
			else
				cout<<" ";
		}
		cout<<endl;
	}
	getch();
}