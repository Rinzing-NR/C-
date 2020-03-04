#include<conio.h>
#include<iostream.h>
class EqMat
{
	int a[9][9];
	int m,n,i,j;
	public:
	void readarray();
	int check(EqMat,EqMat);
	void print();
	EqMat(int mm,int nn)
	{
		m=mm,n=nn;
	}
};
void EqMat::readarray()
{
	cout<<"Enter elements"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cin>>a[i][j];
	}
}
int EqMat::check(EqMat P,EqMat Q)
{
	int x=1;
	for(i=0;i<P.m;i++)
	{
		for(j=0;j<P.n;j++)
		{
			if(P.a[i][j]!=Q.a[i][j])
			{
				x=0;
			}
		}
	}
	return x;
}
void EqMat::print()
{
	cout<<"Matrix:"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
}
void main()
{
	clrscr();
	int a,b,x;
	cout<<"Enter size of matrix"<<endl;
	cin>>a>>b;
	EqMat obj1(a,b),obj2(a,b);
	obj1.readarray();
	obj2.readarray();
	x=obj1.check(obj1,obj2);
	if(x==0)
		cout<<"Not Equal"<<endl;
	else
		cout<<"Equal"<<endl;
	obj1.print();
	obj2.print();
	getch();
}