#include<math.h>
#include<conio.h>
#include<iostream.h>
class exec
{
	double s;
	public:
	void sum(int,int);
	int fac(int);
	exec()
	{
		s=0.0;
	}
}obj;
void exec::sum(int x,int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		s=s+(pow(x,i)/obj.fac(i+1));
	}
	cout<<s<<endl;
}
int exec::fac(int x)
{
	if(x==0||x==1)
		return 1;
	else
		return x*fac(x-1);
}
void main()
{
	clrscr();
	int a,b;
	cout<<"Enter a & b"<<endl;
	cin>>a>>b;
	obj.sum(a,b);
	getch();
}