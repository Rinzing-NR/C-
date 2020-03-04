#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
class movieMagic
{
	int year;
	char title[30];
	float rating;
	public:
	void accept();
	void display();
	movieMagic()
	{
		year=0;
		strcpy(title,"");
		rating=0.0;
	}
}obj;
void movieMagic::accept()
{
	cout<<"Enter title"<<endl;
	gets(title);
	cout<<"Enter year"<<endl;
	cin>>year;
	cout<<"Enter rating"<<endl;
	cin>>rating;
}
void movieMagic::display()
{
	cout<<"Title="<<title<<endl;
	cout<<"Year="<<year<<endl;
	cout<<"Rating="<<rating<<endl;
	if(rating<=2.0)
		cout<<"Flop"<<endl;
	else if(rating>2.0&&rating<=3.4)
		cout<<"Semi-Hit"<<endl;
	else if(rating>3.4&&rating<=4.5)
		cout<<"Hit"<<endl;
	else
		cout<<"Super-Hit"<<endl;
}
void main()
{
	clrscr();
	obj.accept();
	obj.display();
	getch();
}