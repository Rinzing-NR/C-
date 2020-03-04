#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float bas,igro=0,mnet=0,anet=0,da=0,hra=0,fa=0,pf=0;
	cout<<"Enter basic salary"<<endl;
	cin>>bas;
	da=10/100*bas;
	hra=15/100*bas;
	fa=12.55/100*bas;
	pf=8.75/100*bas;
	gro=da+hra+bas+fa;
	mnet=gro-pf;
	anet=mnet*12;
	cout<<"gro="<<gro<<endl<<"mnet="<<mnet<<endl<<"anet="<<anet<<endl;
	getch();
}