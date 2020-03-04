#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
class Combine
{
	int *com;
	int size;
	public:
	void inputarray();
	void sort();
	void mix(Combine,Combine);
	void display();
	Combine(int nn)
	{
		size=nn;
		com=(int*)calloc(size,sizeof(int));
	}
	~Combine()
	{
		cout<<"Deallocation successful"<<endl;
		getch();
	}
};
void Combine::inputarray()
{
	int i;
	cout<<"Enter elements"<<endl;
	for(i=0;i<size;i++)
		cin>>com[i];
}
void Combine::sort()
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(com[i]>com[j])
			{
				com[i]=com[i]+com[j];
				com[j]=com[i]-com[j];
				com[i]=com[i]-com[j];
			}
		}
	}
}
void Combine::mix(Combine A,Combine B)
{
	int i,j;
	for(i=0;i<A.size;i++)
		com[i]=A.com[i];
	for(j=0;j<B.size;j++,i++)
		com[i]=B.com[j];
}
void Combine::display()
{
	int i;
	cout<<"Merged array"<<endl;
	for(i=0;i<size;i++)
		cout<<com[i]<<" ";
}
void main()
{
	clrscr();
	int a,b;
	cout<<"Enter size of array 1"<<endl;
	cin>>a;
	cout<<"Enter size of array 2"<<endl;
	cin>>b;
	Combine obj1(a),obj2(b),obj3(a+b);
	obj1.inputarray();
	obj2.inputarray();
	obj3.mix(obj1,obj2);
	obj3.sort();
	obj3.display();
}