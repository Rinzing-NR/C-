#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float a,b;
	char ch;
	cout<<"Enter\n+ for add\n- for sub\n* for mul\n/for div"<<endl;
	cin>>ch;
	cout<<"Enter operands"<<endl;
	cin>>a>>b;
	switch(ch)
	{
		case '+':
		cout<<"Sum="<<a+b<<endl;
		break;
		case '-':
		cout<<"Difference="<<a-b<<endl;
		break;
		case '*':
		cout<<"Product="<<a*b<<endl;
		break;
		case '/':
		cout<<"Quotient="<<a/b<<endl;
		break;
		default:
		cout<<"Invalid Input"<<endl;
	}
	getch();
}