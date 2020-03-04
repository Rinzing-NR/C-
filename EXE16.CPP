#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
class FruitJuice
{
	int product_code,pack_size,product_price;
	char flavour[30],pack_type[30];
	public:
	FruitJuice()
	{
		product_code=0,pack_size=0,product_price=0;
		strcpy(flavour,"");
		strcpy(pack_type,"");
	}
	public:
	void input();
	void discount();
	void display();
};
void FruitJuice::input()
{
	cout<<"Enter product code"<<endl;
	cin>>product_code;
	cout<<"Enter pack size"<<endl;
	cin>>pack_size;
	cout<<"Enter product price"<<endl;
	cin>>product_price;
	cout<<"Enter flavor"<<endl;
	gets(flavour);
	cout<<"Enter pack type"<<endl;
	gets(pack_type);
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
	FruitJuice obj;
	obj.input();
	obj.discount();
	obj.display();
	getch();
}