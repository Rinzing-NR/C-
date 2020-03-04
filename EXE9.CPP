#include<math.h>
#include<conio.h>
#include<iostream.h>
class over
{
	public:
	double area(double,double,double);
	double area(int,int,int);
	double area(double,double);
}obj;
double over::area(double a,double b,double c)
{
	double r,s;
	s=(a+b+c)/2;
	r=sqrt(s*(s-a)*(s-b)*(s-c));
	return r;
}
double over::area(int a,int b,int height)
{
	double r;
	r=((double)1/2*height*(a+b));
	return r;
}
double over::area(double diagonal1,double diagonal2)
{
	double r;
	r=(double)1/2*diagonal1*diagonal2;
	return r;
}
void main()
{
	clrscr();
	int a1,b1,h;
	double a,b,c,d1,d2,x,y,z;
	cout<<"Enter a, b & c"<<endl;
	cin>>a>>b>>c;
	cout<<"Enter a, b & h"<<endl;
	cin>>a1>>b1>>h;
	cout<<"Enter d1 & d2"<<endl;
	cin>>d1>>d2;
	x=obj.area(a,b,c);
	y=obj.area(a1,b1,h);
	z=obj.area(d1,d2);
	cout<<"Area="<<x<<endl;
	cout<<"Area="<<y<<endl;
	cout<<"Area="<<z<<endl;
	getch();
}