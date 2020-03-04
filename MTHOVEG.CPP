#include<iostream.h>
#include<conio.h>
class over
{
	public:
	void calc(int x, int y);
	void calc(float r);
	void calc(char ch1, char ch2);
};
void over::calc(int x, int y)
{
	cout<<"product="<<(x*y)<<endl;
}
void over::calc(float r)
{
	cout<<"area="<<(3.14*r*r)<<endl;
}
void over::calc(char ch1,char ch2)
{
	if((int)ch1>(int)ch2)
	{
		cout<<ch1<<" has higher numberic value:"<<endl;
	}
	else if((int)ch2>(int)ch1)
	{
		cout<<ch2<<" has higher numberic value:"<endl;
	}
	else
	{
		cout<<"both are equal";
	}
}
void main()
{
	clrscr();
	over ob;
	ob.calc(23,67);
	ob.calc(5.6);
	ob.calc('s','d');
	getch();
}