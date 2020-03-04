#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,c=0;
	cout<<"Enter number"<<endl;
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			c++;
	}
	if(c==0)
		cout<<"Prime"<<endl;
	else
		cout<<"Not Prime"<<endl;
	getch();
}