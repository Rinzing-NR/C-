#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,s=0;
	cout<<"Enter limit"<<endl;
	cin>>n;
	for(i=1;i<=n;i=i+2)
		s=s+i;
	cout<<"Sum="<<s<<endl;
	getch();
}