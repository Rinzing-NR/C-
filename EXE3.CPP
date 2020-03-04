#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class mobike
{
	int bno,phno,days,charge;
	char name[30];
	public:
	void input();
	void compute();
	void display();
}obj;
void mobike::input()
{
	cout<<"Enter name"<<endl;
	gets(name);
	cout<<"Enter bike number"<<endl;
	cin>>bno;
	cout<<"Enter phone number"<<endl;
	cin>>phno;
	cout<<"Enter days"<<endl;
	cin>>days;
}
void mobike::compute()
{
	if(days<=5)
		charge=500*days;
	else if(days>5&&days<=10)
		charge=(5*500)+(400*(days-5));
	else
		charge=(5*500)+(5*400)+(200*(days-10));
}
void mobike::display()
{
	cout<<"Bike No.\tPhone No.\tName\tNo. of days\tCharge"<<endl;
	cout<<bno<<"\t\t"<<phno<<"\t\t"<<name<<"\t"<<days<<"\t\t"<<charge<<endl;
}
void main()
{
	clrscr();
	obj.input();
	obj.compute();
	obj.display();
	getch();
}