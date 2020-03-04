#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
class student
{
	public:
	void input();
	void calc();
	void display();
	char name[30];
	int age,m1,m2,m3,maximum,average;
	student(char n[],int a,int x1,int x2,int x3,int y,int z)
	{
		strcpy(name,n);
		age=a,m1=x1,m2=x2,m3=x3,maximum=y,average=z;
	}
};
void student::input()
{
	cout<<"Enter name"<<endl;
	gets(name);
	cout<<"Enter age"<<endl;
	cin>>age;
	cout<<"Enter m1, m2 & m3"<<endl;
	cin>>m1>>m2>>m3;
}
void student::calc()
{
	average=(m1+m2+m3)/3;
	maximum=m1;
	if(m2>maximum)
		maximum=m2;
	if(m3>maximum)
		maximum=m3;
}
void student::display()
{
	cout<<"Name="<<name<<endl;
	cout<<"Age="<<age<<endl;
	cout<<"m1="<<m1<<endl;
	cout<<"m2="<<m2<<endl;
	cout<<"m3="<<m3<<endl;
	cout<<"Maximum="<<maximum<<endl;
	cout<<"Average="<<average<<endl;
}
void main()
{
	clrscr();
	student obj("",0,0,0,0,0,0);
	obj.input();
	obj.calc();
	obj.display();
	getch();
}