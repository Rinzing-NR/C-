#include<math.h>
#include<conio.h>
#include<iostream.h>
class over
{
	public:
	double series(double);
	double series(double,double);
}obj;
double over::series(double n)
{
	double sum=0.0;
	int i;
	for(i=1;i<=n;i++)
		sum=sum+((double)1/i);
	return sum;
}
double over::series(double a,double n)
{
	double sum=0.0;
	int i,x=1,y=2;
	for(i=1;i<=n;i++,x+=3,y+=3)
		sum=sum+((double)x/pow(a,y));
	return sum;
}
void main()
{
	clrscr();
	double a,b,c,x,y;
	cout<<"Enter a"<<endl;
	cin>>a;
	cout<<"Enter b & c"<<endl;
	cin>>b>>c;
	x=obj.series(a);
	y=obj.series(b,c);
	cout<<"Sum="<<x<<endl;
	cout<<"Sum="<<y<<endl;
	getch();
}