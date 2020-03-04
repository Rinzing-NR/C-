#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int *arr,n,i,l,u,mid,s,f=0;
	cout<<"Enter size"<<endl;
	cin>>n;
	arr=(int*)malloc(n*sizeof(int));
	cout<<"Enter elements"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
	l=0,u=n-1;
	cout<<"Enter search number"<<endl;
	cin>>s;
	while(u>=l)
	{
		mid=(u+l)/2;
		if(arr[mid]>s)
			u=mid-1;
		else if(arr[mid]<s)
			l=mid+1;
		else
		{
			f=1;
			break;
		}
	}
	if(f==1)
		cout<<s<<" found in "<<mid<<" position";
	else
		cout<<s<<" not found";
	getch();
}