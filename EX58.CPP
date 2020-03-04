#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int *arr,i,n,j;
	cout<<"Enter size"<<endl;
	cin>>n;
	arr=(int*)malloc(n*sizeof(int));
	cout<<"Enter elements"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				arr[i]=arr[i]+arr[j];
				arr[j]=arr[i]-arr[j];
				arr[i]=arr[i]-arr[j];
			}
		}
	}
	cout<<"Ascending order:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	getch();
}