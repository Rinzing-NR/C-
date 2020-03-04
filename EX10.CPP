#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	long  pre,n;
	cout<<"Enter the present population"<<endl;
	cin>>pre;
	cout<<"Enter number of years"<<endl;
	cin>>n;
	cout<<"Population after "<<n<<" years is "<<pre*pow(1.06,n)<<endl;
	getch();
}