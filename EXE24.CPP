#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
class Frequency
{
	char text[50];
	int countand,countan,len;
	public:
	void accept(char[]);
	void checkandfreq();
	void checkanfreq();
	void display();
	Frequency()
	{
		strcpy(text,"");
		countand=0,countan=0,len=0;
	}
	~Frequency()
	{
		cout<<"Deallocation successful"<<endl;
		getch();
	}
}obj;
void Frequency::accept(char n[])
{
	strcpy(text,strlwr(n));
}
void Frequency::checkandfreq()
{
	char wrd[20];
	int i,j,x;
	len=strlen(text);
	for(i=0;i<len;i=j+1,x=0)
	{
		strcpy(wrd,"");
		for(j=i;j<len&&text[j]!=' ';j++,x++)
			wrd[x]=text[j];
		wrd[x]='\0';
		if(strcmp(wrd,"and")==0)
			countand++;
	}
}
void Frequency::checkanfreq()
{
	char wrd[20];
	int i,j,x;
	for(i=0;i<len;i=j+1,x=0)
	{
		strcpy(wrd,"");
		for(j=i;j<len&&text[j]!=' ';j++,x++)
			wrd[x]=text[j];
		wrd[x]='\0';
		if(strcmp(wrd,"an")==0)
			countan++;
	}
}
void Frequency::display()
{
	cout<<"And="<<countand<<endl;
	cout<<"An="<<countan<<endl;
}
void main()
{
	clrscr();
	char n[50];
	cout<<"Enter text"<<endl;
	gets(n);
	obj.accept(n);
	obj.checkandfreq();
	obj.checkanfreq();
	obj.display();
}