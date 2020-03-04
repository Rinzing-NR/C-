#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class FruitJuice
{
	int product_code,pack_size,product_price;
	char flavour[30],pack_type[30];
	public:
	void input();
	void discount();
	void display();
}obj;
void FruitJuice::input()
{
	cout<<"Enter flavour"<<endl;
	gets(flavour);
	cout<<"Enter pack type"<<endl;
	gets(pack_type);
	cout<<"Enter product code"<<endl;
	cin>>product_code;
	cout<<"Enter pack size"<<endl;
	cin>>pack_size;
	cout<<"Enter product price"<<endl;
	cin>>product_price;
}
void FruitJuice::discount()
{
	product_price-=10;
}
void FruitJuice::display()
{
	cout<<"Product code="<<product_code<<endl;
	cout<<"Flavour="<<flavour<<endl;
	cout<<"Pack type="<<pack_type<<endl;
	cout<<"Pack size="<<pack_size<<endl;
	cout<<"Product price="<<product_price<<endl;
}
void main()
{
	clrscr();
	obj.input();
	obj.discount();
	obj.display();
	getch();
}