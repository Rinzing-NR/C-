#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream.h>
class A
{
	public:
	char name[30],add[30];
	float amt;
	void accept1();
	void display();
};
void A::accept1()
{
	cout<<"Enter name"<<endl;
	gets(name);
	cout<<"Enter address"<<endl;
	gets(add);
	cout<<"Enter amount"<<endl;
	cin>>amt;
}
void A::display()
{
	cout<<"Name="<<name<<endl;
	cout<<"Address="<<add<<endl;
	cout<<"Amount="<<amt<<endl;
}
class B:public A
{
	public:
	void calculate();
};
void B::calculate()
{
	accept1();
	display();
	if(amt<=5000)
		amt=amt-((float)10/100*amt);
	else if(amt>5000&&amt<=10000)
		amt=amt-((float)20/100*amt);
	else if(amt>10000&&amt<=20000)
		amt=amt-((float)30/100*amt);
	else
		amt=amt-((float)40/100*amt);
}
class C:public B
{
	public:
	void display3();
};
void C::display3()
{
	calculate();
	cout<<"Name\tAddress\tAmount"<<endl;
	cout<<name<<"\t"<<add<<"\t"<<amt<<endl;
}
void main()
{
	clrscr();
	C obj;
	obj.display3();
	getch();
}