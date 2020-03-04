#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
class BookFair
{
	char bname[30];
	double price;
	public:
	void input();
	void calculate();
	void display();
	BookFair()
	{
		strcpy(bname,"");
		price=0.0;
	}
}obj;
void BookFair::input()
{
	cout<<"Enter name of book"<<endl;
	gets(bname);
	cout<<"Enter price"<<endl;
	cin>>price;
}
void BookFair::calculate()
{
	if(price<=1000)
		price=price-((double)2/100*price);
	else if(price>1000&&price<=3000)
		price=price-((double)10/100*price);
	else
		price=price-((double)15/100*price);
}
void BookFair::display()
{
	cout<<"Name="<<bname<<endl;
	cout<<"After discount price="<<price<<endl;
}
void main()
{
	clrscr();
	obj.input();
	obj.calculate();
	obj.display();
	getch();
}