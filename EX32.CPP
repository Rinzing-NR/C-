#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n;
	cout<<"Enter your number"<<endl;
	cin>>n;
	for(i=1;i<=10;i++)
		cout<<n<<"\tx\t"<<i<<"=\t"<<n*i<<endl;
	getch();
}