#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int x,i,n;
	double s=0.0;
	cout<<"Enter limit and numerator"<<endl;
	cin>>n>>x;
	for(i=1;i<=n;i++)
		s=s+((double)
		pow(x,i)/i);
	cout<<"Sum="<<s;
	getch();
}