#include<conio.h>
#include<iostream.h>
class MatRev
{
	int arr[9][9];
	int m,n,i,j;
	public:
	void fillarray();
	int reverse(int);
	void revMat(MatRev);
	void show();
	MatRev(int mm,int nn)
	{
		m=mm,n=nn;
	}
};
void MatRev::fillarray()
{
	cout<<"Enter array elements"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cin>>arr[i][j];
	}
}
int MatRev::reverse(int x)
{
	int rev=0,r;
	while(x>0)
	{
		r=x%10;
		rev=rev*10+r;
		x=x/10;
	}
	cout<<rev<<endl;
	return rev;
}
void MatRev::revMat(MatRev P)
{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			arr[i][j]=reverse(P.arr[i][j]);
		}
	}
}
void MatRev::show()
{
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
	int a,b;
	cout<<"Enter size of matrix"<<endl;
	cin>>a>>b;
	MatRev obj1(a,b);
	MatRev obj2(a,b);
	obj1.fillarray();
	obj2.revMat(obj1);
	obj2.show();
	getch();
}