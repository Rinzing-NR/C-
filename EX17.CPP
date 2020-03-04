#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float sale,com;
	cout<<"Enter sale amount"<<endl;
	cin>>sale;
	if(sale<=5000)
	{
		com=(float)5/100*sale;
	}
	else if(sale>5000&&sale<=10000)
	{
		com=(float)10/100*sale;
	}
	else if(sale>10000&&sale<=20000)
	{
		com=(float)20/100*sale;
	}
	else
	{
		com=(float)30/100*sale;
	}
	cout<<"Sale\tCommission\n"<<sale<<"\t"<<com<<endl;
	getch();
}