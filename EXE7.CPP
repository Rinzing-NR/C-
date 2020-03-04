#include<conio.h>
#include<iostream.h>
class over
{
	public:
	void polygon(int,char);
	void polygon(int,int);
	void polygon();
}obj;
void over::polygon(int n,char ch)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cout<<ch;
		cout<<endl;
	}
}
void over::polygon(int x,int y)
{
	int i,j;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=y;j++)
			cout<<'@';
		cout<<endl;
	}
}
void over::polygon()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)
			cout<<'*';
		cout<<endl;
	}
}
void main()
{
	clrscr();
	int n,x,y;
	char ch;
	cout<<"Enter n & ch"<<endl;
	cin>>n>>ch;
	cout<<"Enter x & y"<<endl;
	cin>>x>>y;
	obj.polygon(n,ch);
	obj.polygon(x,y);
	obj.polygon();
	getch();
}