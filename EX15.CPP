#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float inc,tax;
	cout<<"Enter annual income"<<endl;
	cin>>inc;
	if(inc<=50000)
	{
		tax=0;
	}
	else if(inc>50000&&inc<=60000)
	{
		tax=(float)10/100*(inc-50000);
	}
	else if(inc>60000&&inc<=150000)
	{
		tax=((float)20/100*(inc-60000))+1000;
	}
	else
	{
		tax=((float)30/100*(inc-150000))+19000;
	}
	cout<<"Tax="<<tax<<endl;
	getch();
}