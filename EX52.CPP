#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int *arr,n,i,s=0;
	cout<<"Enter size"<<endl;
	cin>>n;
	arr=(int*)malloc(n*sizeof(int));
	cout<<"Enter elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		s=s+arr[i];
	}
	cout<<"Sum="<<s;
	getch();
}