#include<conio.h>
#include<iostream.h>
class over
{
	public:
	double volume(double);
	double volume(double,double);
	double volume(double,double,double);
}obj;
double over::volume(double r)
{
	double v;
	v=(double)4/3*22/7*r*r*r;
	return v;
}
double over::volume(double h,double r)
{
	double v;
	v=(double)22/7*r*r*h;
	return v;
}
double over::volume(double l,double b,double h)
{
	double v;
	v=l*b*h;
	return v;
}
void main()
{
	clrscr();
	cout<<"Volume="<<obj.volume(7.0)<<endl;
	cout<<"Volume="<<obj.volume(3.0,5.0)<<endl;
	cout<<"Volume="<<obj.volume(2.0,3.0,4.0)<<endl;
	getch();
}