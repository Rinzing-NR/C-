#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int *arr,i,n,j;
	cout<<"Enter size"<<endl;
	cin>>n;
	arr=(int*)calloc(n,sizeof(int));
	cout<<"Enter elements"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
				arr[j]=arr[j]-arr[j+1];
			}
		}
	}
	cout<<"Ascending order"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	getch();
}