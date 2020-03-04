#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
class ShowRoom
{
	char name[30];
	long mobno;
	double cost,dis,amount;
	public:
	void input();
	void calculate();
	void display();
	ShowRoom()
	{
		strcpy(name,"");
		mobno=0;
		cost=0.0,dis=0.0,amount=0.0;
	}
}obj;
void ShowRoom::input()
{
	cout<<"Enter name"<<endl;
	gets(name);
	cout<<"Enter mobile number"<<endl;
	cin>>mobno;
	cout<<"Enter cost"<<endl;
	cin>>cost;
}
void ShowRoom::calculate()
{
	if(cost<=10000)
		dis=(double)5/100*cost;
	else if(cost>10000&&cost<=20000)
		dis=(double)10/100*cost;
	else if(cost>20000&&cost<=35000)
		dis=(double)15/100*cost;
	else
		dis=(double)20/100*cost;
}
void ShowRoom::display()
{
	cout<<"Name="<<name<<endl;
	cout<<"Mobile number="<<mobno<<endl;
	cout<<"Amount="<<cost-dis<<endl;
}
void main()
{
	clrscr();
	obj.input();
	obj.calculate();
	obj.display();
	getch();
}