#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,a=0,b=1,s=0;
	cout<<"Enter range"<<endl;
	cin>>n;
	while(s<=n)
	{
		if(s%2==0)
			cout<<s<<" ";
		s=a+b;
		b=a;
		a=s;
	}
	getch();
}