#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int *arr,n,i,l,s;
	cout<<"Enter size"<<endl;
	cin>>n;
	arr=(int*)calloc(n,sizeof(int));
	cout<<"Enter elements"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
	l=arr[0],s=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>l)
			l=arr[i];
		if(arr[i]<s)
			s=arr[i];
	}
	cout<<"Largest\tSmallest"<<endl<<l<<"\t"<<s;
	getch();
}