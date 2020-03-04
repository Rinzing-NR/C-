#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i;
	cout<<"Enter Limit"<<endl;
	cin>>n;
	for(i=2;i<=n;i=i+2)
	{
		cout<<i<<" ";
	}
	getch();
}