#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,i,n;
	double s=0.0;
	cout<<"Enter limit and numerator"<<endl;
	cin>>n>>x;
	for(i=1;i<=n;i++)
		s=s+((double)x/i);
	cout<<"Sum="<<s;
	getch();
}