#include<math.h>
#include<conio.h>
#include<iostream.h>
class over
{
	public:
	void SumSeries(int,double);
	void SumSeries();
}obj;
void over::SumSeries(int n,double x)
{
	double s=0.0;
	int i;
	for(i=1;i<=n;i++)
		s=s+((pow(-1,i+1))*x/i);
	cout<<s<<endl;
}
void over::SumSeries()
{
	long s=0,pro,i,j;
	for(i=1;i<=20;i++)
	{
		pro=1;
		for(j=1;j<=i;j++)
			pro=pro*j;
		s=s+pro;
	}
	cout<<pro<<endl;
}
void main()
{
	clrscr();
	obj.SumSeries(7,3.0);
	obj.SumSeries();
	getch();
}