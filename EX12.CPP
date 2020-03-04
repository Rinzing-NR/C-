#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double s,c=0;
	cout<<"Enter sale"<<endl;
	cin>>s;
	if(s>=100000)
	{
		c=(double)25/100*s;
	}
	else if(s>=80000&&s<100000)
	{
		c=(double)22.5/100*s;
	}
	else if(s>=60000&&s<80000)
	{
		c=(double)20/100*s;
	}
	else if(s>=40000&&s<60000)
	{
		c=(double)15/100*s;
	}
	else
	{
		c=(double)12.5/100*s;
	}
	cout<<"Commission="<<c;
	getch();
}