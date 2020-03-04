#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float calls,rate;
	cout<<"Enter number of calls"<<endl;
	cin>>calls;
	if(calls<=50)
	{
		rate=0;
	}
	else if(calls>50&&calls<=150)
	{
		rate=(calls-50);
	}
	else if(calls>150&&calls<=250)
	{
		rate=100+((calls-150)*0.9);
	}
	else
	{
		rate=100+(200*0.9)+((calls-250)*0.8);
	}
	cout<<"Charge="<<rate+180;
	getch();
}