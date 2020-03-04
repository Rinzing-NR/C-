#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
class Mixer
{
	int *arr;
	int n;
	public:
	void accept();
	Mixer mix(Mixer);
	void display();
	Mixer(int nn)
	{
		n=nn;
		arr=(int*)malloc(n*sizeof(int));
	}
	~Mixer()
	{
		cout<<"Deallocation successful"<<endl;
		getch();
	}
};
void Mixer::accept()
{
	int i,j,x,flag=0;
	cout<<"Enter elements"<<endl;
	for(i=0;i<n;flag=0)
	{
		cin>>x;
		for(j=0;j<i;j++)
		{
			if(arr[j]==x)
			{
				cout<<"Don't enter duplicate"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==1)
			continue;
		else
		{
			arr[i]=x;
			i++;
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				x=arr[i];
				arr[i]=arr[j];
				arr[j]=x;
			}
		}
	}
}
Mixer Mixer::mix(Mixer A)
{
	int i,j;
	Mixer objr(n+A.n);
	for(i=0;i<n;i++)
		objr.arr[i]=arr[i];
	for(j=0;j<A.n;j++,i++)
		objr.arr[i]=A.arr[j];
	return objr;
}
void Mixer::display()
{
	int i;
	cout<<"array:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void main()
{
	clrscr();
	int a,b;
	cout<<"Enter array 1 size"<<endl;
	cin>>a;
	cout<<"Enter array 2 size"<<endl;
	cin>>b;
	Mixer obj1(a),obj2(b),obj3(a+b);
	obj1.accept();
	obj2.accept();
	obj3=obj2.mix(obj1);
	obj1.display();
	obj2.display();
	obj3.display();
}