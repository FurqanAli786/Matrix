#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int r,c;
	int *p;
	
	cout<<" Enter Number of Rows ";
	cin>>r;
	cout<<" Enter Number of Columns";
	cin>>c;

	
	p=new int[r];
	p=new int[c];

	for (int i=1;i<=r;i++)
		for (int j=1;j<=c;j++)
	{
		cout<<endl;
		cout<<" Enter Elements "<<i<<" :::";
	cin>>p[i];
	}

	for (int i=1;i<=r;i++)
		{for (int j=1;j<=c;j++)
	{
		cout<<*(p+i);
			cout<<"\n\t";
	}cout<<endl;}

getch();
}