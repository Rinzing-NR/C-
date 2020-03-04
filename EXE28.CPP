#include<conio.h>
#include<iostream.h>
class rec
{
	public:
	int fact(int);
}obj;
void main()
{
	clrscr();
	int a,x;
	cout<<"Enter a"<<endl;
	cin>>a;
	x=obj.fact(a);
	cout<<x<<endl;
	getch();
}
int rec::fact(int s)
{
	if((s==1)||(s==0))
		return 1;
	else
		return s*fact(s-1);
}