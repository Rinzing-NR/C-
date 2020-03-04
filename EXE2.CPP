#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class student
{
	char name[30];
	int age,m1,m2,m3,maximum,average;
	public:
	void input();
	void calc();
	void disp();
}obj;
void student::input()
{
	cout<<"Enter name"<<endl;
	gets(name);
	cout<<"Enter age"<<endl;
	cin>>age;
	cout<<"Enter marks of 3 subjects"<<endl;
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
void student::disp()
{
	cout<<"Name\tAge\tm1\tm2\tm3\tAverage\tMaximum"<<endl;
	cout<<name<<"\t"<<age<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<average<<"\t"<<maximum<<endl;
}
void main()
{
	clrscr();
	obj.input();
	obj.calc();
	obj.disp();
	getch();
}