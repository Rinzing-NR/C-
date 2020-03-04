#include<iostream.h>
#include<conio.h>


class addition
{
	int x,y,sum;
	public:
		//addition();
		void input();
		void add();
		void display();
	addition()
	{
		x=0,y=0,sum=0;
	}
};
void addition::input()
{
	cout<<"enter the value of x:"<<endl;
	cin>>x;
	cout<<"enter the value of y:"<<endl;
	cin>>y;
}
void addition::add()
{                                          Graphics
	sum=x+y;
}
void addition::display()
{
	cout<<"sum="<<sum;
}
void main()
{
	clrscr();
	addition ob;// ob();
	ob.input();
	ob.add();
	ob.display();
	getch();
}

