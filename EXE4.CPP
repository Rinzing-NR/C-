#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class Library
{
	int acc_num;
	char title[30],author[30];
	public:
	void input();
	void compute();
	void display();
}obj;
void Library::input()
{
	cout<<"Enter Accession Number"<<endl;
	cin>>acc_num;
	cout<<"Enter title"<<endl;
	gets(title);
	cout<<"Enter author"<<endl;
	gets(author);
}
void Library::compute()
{
	int days;
	cout<<"Enter number of days late"<<endl;
	cin>>days;
	cout<<"Fine="<<days*2<<endl;
}
void Library::display()
{
	cout<<"Accession number\tTitle\tAuthor"<<endl;
	cout<<acc_num<<"\t"<<title<<"\t"<<author<<endl;
}
void main()
{
	clrscr();
	obj.input();
	obj.compute();
	obj.display();
	getch();
}