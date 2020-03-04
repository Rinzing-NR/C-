#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float charge,units;
	cout<<"Enter units"<<endl;
	cin>>units;
	if(units<=100)
	{
		charge=(float)units*0.8;
	}
	else if(units>100&&units<=200)
	{
		charge=((float)100*0.8)+(((float)units-100)*1);
	}
	else
	{
		charge=((float)100*0.8)+((float)100*1)+(((float)units-200)*1.25);
	}
	cout<<"Charge="<<charge+50<<endl;
	getch();
}