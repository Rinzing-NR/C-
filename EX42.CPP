#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,i,j;
	cout<<"Enter limit"<<endl;
	cin>>x;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=x;j++)
		{
			if(j<=x-i+1
			)
				cout<<"x";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	getch();
}