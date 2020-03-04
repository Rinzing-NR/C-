#include<conio.h>
#include<iostream.h>

class A
{
	public:
	int x;
	public:
	void accept1();
	void display1();
};
void A::accept1()
{
	cout<<"enter the value of x=";
	cin>>x;
}
void A::display1()
{
	cout<<"\nthe value of x="<<x;
}

class B
{
	public:
	int y;//,sum;
	public:
	void accept2();
	//void add();
	void display2();
};
void B::accept2()
{
	//accept1();
	cout<<"\nenter the value of y";
	cin>>y;
}
/*void C::add()
{
	sum=x+y;
} */
void B::display2()
{
	//display1();
	cout<<"\nthe value of y="<<y<<endl;
	//cout<<"\nsum="<<sum;
	//display3();
}
class C:A,B
{
	int sum;
	public:
	void input();
	void display3();
	void add();
};
void C::input()
{
	accept1();
	accept2();
	display1();
	display2();
}
void C::add()
{
	sum=x+y;
}
void C::display3()
{
	cout<<"A="<<x<<" and y="<<y<<" so sum="<<sum;
}

void main()
{
	clrscr();
	C obj;
	obj.input();
	obj.add();
	obj.display3();
	getch();
}