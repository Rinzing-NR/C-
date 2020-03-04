#include<iostream.h>
#include<conio.h>

class addition
{
	int x,y;
	public:

	void input();
	addition midpoint(addition);
	void display();
};

void addition::input()
{
	cout<<"enter the value of x";
	cin>>x;
	cout<<"\nenter the value of y";
	cin>>y;
}
addition addition::midpoint(addition ob1)
{
	addition ob4;
	ob4.x=(ob1.x+x)/2;
	ob4.y=(ob1.y+y)/2;
	return ob4;
}
void addition::display()
{
	cout<<endl<<"x="<<x<<endl;
	cout<<endl<<"y="<<y<<endl;
}

void main()
{
	clrscr();
	addition obj1;
	addition obj2;
	addition obj3;
	obj1.input();
	obj2.input();
	obj3=obj2.midpoint(obj1);
	obj3.display();
	getch();
}
