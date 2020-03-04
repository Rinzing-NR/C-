#include<math.h>
#include<conio.h>
#include<iostream.h>
class over
{
	public:
	void series(int,int);
	void series(int);
	void series();
}obj;
void over::series(int x,int n)
{
	double s=0.0;
	int i;
	for(i=1;i<=n;i++)
		s=s+pow(x,i);
	cout<<s<<endl;
}
void over::series(int p)
{
	int i;
	for(i=1;i<=p;i++)
		cout<<(int)pow(i,3)-1<<" ";
	cout<<endl;
}
void over::series()
{
	double s=0.0;
	int i;
	for(i=1;i<=9;i++)
		s=s+((double)1/(i+1));
	cout<<s<<endl;
}
void main()
{
	clrscr();
	obj.series(3,10);
	obj.series(8);
	obj.series();
	getch();
}