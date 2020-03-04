#include<conio.h>
#include<iostream.h>
class Matrix
{
	int arr[5][5];
	int m,n;
	public:
	void fillarray();
	Matrix SubMat(Matrix);
	void display();
	Matrix(int mm,int nn)
	{
		m=mm,n=nn;
	}
	~Matrix()
	{
		cout<<"Deallocation successful"<<endl;
		getch();
	}
};
void Matrix::fillarray()
{
	int i,j;
	cout<<"Enter elements"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cin>>arr[i][j];
	}
}
Matrix Matrix::SubMat(Matrix A)
{
	int i,j;
	Matrix objr(m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			objr.arr[i][j]=arr[i][j]-A.arr[i][j];
	}
	return objr;
}
void Matrix::display()
{
	int i,j;
	cout<<"Matrix:"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cout<<arr[i][j]<<"\t";
		cout<<endl;
	}
}
void main()
{
	clrscr();
	int x,y;
	cout<<"Enter size of row and column"<<endl;
	cin>>x>>y;
	Matrix obj1(x,y),obj2(x,y),obj3(x,y);
	obj1.fillarray();
	obj2.fillarray();
	obj3=obj2.SubMat(obj1);
	obj3.display();
}