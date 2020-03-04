#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int *arr,i,n,s,f=0;
	cout<<"Enter size"<<endl;
	cin>>n;
	arr=(int*)calloc(n,sizeof(int));
	cout<<"Enter elements"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter search number"<<endl;
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(s==arr[i])
		{
			f=1;
			break;
		}
	}
	if(f==1)
		cout<<s<<" found in "<<i<<" position";
	else
		cout<<s<<" not found";
	getch();
}


