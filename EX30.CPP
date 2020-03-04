#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int x,r,s=0,cpy;
	cout<<"Enter number"<<endl;
	cin>>x;
	cpy=x;
	while(x>0)
	{
		r=x%10;
		s=s+(int)pow(r,3);
		x=x/10;
	}
	if(s==cpy)
		cout<<"Armstrong"<<endl;
	else
		cout<<"Not Armstrong"<<endl;
	getch();
}
