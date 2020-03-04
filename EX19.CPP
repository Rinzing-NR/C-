#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int days;
	float ch;
	cout<<"Enter number of days"<<endl;
	cin>>days;
	if(days<=7)
	{
		ch=(float)days*0.2;
	}
	else if(days>7&&days<=14)
	{
		ch=(float)days*0.3;
	}
	else if(days>14&&days<=21)
	{
		ch=(float)days*0.4;
	}
	else
	{
		ch=(float)days*0.5;
	}
	cout<<"Fine="<<ch<<endl;
	getch();
}