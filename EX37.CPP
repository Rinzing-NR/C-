#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i;
	double s=0.0;
	cout<<"Enter limit"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s=s+((double)1/i);
	}
	cout<<"Sum="<<s;
	getch();
}