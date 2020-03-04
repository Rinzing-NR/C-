#include<conio.h>
#include<iostream.h>
class Adder
{
	int a[2];
	int i,j;
	public:
	void readtime();
	void addtime(Adder,Adder);
	void disptime();
	Adder()
	{
		a[0]=0,a[1]=0;
	}
};
void Adder::readtime()
{
	cout<<"Enter time in hrs & mins"<<endl;
	cin>>a[0]>>a[1];
}
void Adder::addtime(Adder X,Adder Y)
{
	int r;
	r=(X.a[0]*60)+(Y.a[0]*60)+X.a[1]+Y.a[1];
	a[0]=r/60;
	a[1]=r%60;
}
void Adder::disptime()
{
	cout<<"Time in hrs & mins is "<<a[0]<<" "<<a[1]<<endl;
}
void main()
{
	clrscr();
	Adder obj1,obj2,obj3;
	obj1.readtime();
	obj2.readtime();
	obj3.addtime(obj1,obj2);
	obj3.disptime();
	getch();
}


