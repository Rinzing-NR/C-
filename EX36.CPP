#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,hcf,lcm,i;
	cout<<"Enter numbers"<<endl;
	cin>>a>>b;
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
			hcf=i;
	}
	lcm=(a*b)/hcf;
	cout<<"HCF\tLCM"<<endl<<hcf<<"\t"<<lcm<<endl;
	getch();
}