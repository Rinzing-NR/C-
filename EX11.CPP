#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float a,b,c,d,e,p;
	cout<<"Enter marks of 5 subjects"<<endl;
	cin>>a>>b>>c>>d>>e;
	p=(a+b+c+d+e)/5;
	if(p>=75)
	{
		cout<<"Passed with star"<<endl;
	}
	else if(p>=60&&p<75)
	{
		cout<<"1st division"<<endl;
	}
	else if(p>=40&&p<60)
	{
		cout<<"2nd division"<<endl;
	}
	else
	{
		cout<<"Fail";
	}
	getch();
}