#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int ch,x;
	cout<<"Enter\n1 to convert KB to Bytes\n2 to convert Meter to Inch\n3 to convert Gallon to Liter"<<endl;
	cin>>ch;
	cout<<"Enter value"<<endl;
	cin>>x;
	switch(ch)
	{
		case 1:
		cout<<"Bytes="<<1024*x<<endl;
		break;
		case 2:
		cout<<"Inch="<<(float)39.34*x<<endl;
		break;
		case 3:
		cout<<"Liter="<<(float)20/9*x<<endl;
		break;
		default:
		cout<<"Invalid input"<<endl;
	}
	getch();
}