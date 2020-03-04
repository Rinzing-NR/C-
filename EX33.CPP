#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,a=0,b=1,s=0;
	cout<<"Enter limit"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<s<<" ";
		s=a+b;
		b=a;
		a=s;
	}
	getch();
}