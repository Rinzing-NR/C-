#include<conio.h>
#include<iostream.h>
class fib
{
	public:
	int fibo(int);
}obj;
int fib::fibo(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
}
void main()
{
	clrscr();
	int i,x;
	cout<<"Enter limit"<<endl;
	cin>>x;
	for(i=0;i<x;i++)
		cout<<obj.fibo(i)<<" ";
	getch();
}