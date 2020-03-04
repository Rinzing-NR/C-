#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int age;
	cout<<"Enter age"<<endl;
	cin>>age;
	if(age>=18)
	{
		cout<<"Eligible"<<endl;
	}
	else
	{
		cout<<"Not Eligible"<<endl;
	}
	getch();
}