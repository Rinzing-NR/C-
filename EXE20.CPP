#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
class Shift
{
	int mat[9][9];
	int m,n;
	public:
	void input();
	void cyclic(Shift);
	void display();
	Shift(int mm,int nn)
	{
		m=mm,n=nn;
	}
};
void Shift::input()
{
	int i,j;
	cout<<"Enter elements"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cin>>mat[i][j];
	}
}
void Shift::cyclic(Shift P)
{
	int i,j;
	for(i=0;i<(m-1);i++)
	{
		for(j=0;j<n;j++)
			mat[i][j]=P.mat[i+1][j];
	}
	for(i=0;i<P.m;i++)
		mat[m-1][i]=P.mat[0][i];
}
void Shift::display()
{
	int i,j;
	cout<<"Matrix:"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cout<<mat[i][j]<<"\t";
		cout<<endl;
	}
}
void main()
{
	clrscr();
	int a,b;
	cout<<"Enter size"<<endl;
	cin>>a>>b;
	Shift obj1(a,b);
	Shift obj2(a,b);
	obj1.input();
	obj2.cyclic(obj1);
	obj2.display();
	getch();
}
