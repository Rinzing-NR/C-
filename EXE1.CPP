#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class Taxable
{
	long inc;
	char name[50],add[50];
	float tax;
	public:
	void accept();
	void taxable();
	void display();
}obj;
void Taxable::accept()
{
	cout<<"Enter name"<<endl;
	gets(name);
	cout<<"Enter address"<<endl;
	gets(add);
	cout<<"Enter income"<<endl;
	cin>>inc;
}
void Taxable::taxable()
{
	if(inc<=150000)
		tax=0.0;
	else if(inc>150000&&inc<=350000)
		tax=((float)10/100)*(inc-150000);
	else if(inc>350000&&inc<=500000)
		tax=1000+(((float)20/100)*(inc-350000));
	else
		tax=3000+(((float)30/100)*(inc-500000));
}
void Taxable::display()
{
	cout<<"Name\tAddress\tIncome\tTax"<<endl;
	cout<<name<<"\t"<<add<<"\t"<<inc<<"\t"<<tax<<endl;
}
void main()
{
	clrscr();
	obj.accept();
	obj.taxable();
	obj.display();
	getch();
}