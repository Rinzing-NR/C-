#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,r,rev=0,cpy;
	cout<<"Enter number"<<endl;
	cin>>x;
	cpy=x;
	while(x>0)
	{
		r=x%10;
		rev=rev*10+r;
		x=x/10;
	}
	if(rev==cpy)
		cout<<"Palindrome"<<endl;
	else
		cout<<"Not Palindrome"<<endl;
	getch();
}