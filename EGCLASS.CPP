#include<iostream.h>
#include<conio.h>

class addition
{
  int x,y,sum;
  public:
  void input();
  void add();
  void display();
}onj,op;
void addition::input()
{
	cout<<"enter a number:";
	cin>>x;
	cout<<"enter another number:";
	cin>>y;
}
void addition::add()
{
	sum=x+y;
}
void addition::display()
{
	cout<<"sum="<<sum;
}

void main()
{
	clrscr();
    //	addition obj;
	onj.input();
	onj.add();
	onj.display();
	op.input();
	op.add();
	onj.display();
	getch();
}