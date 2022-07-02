#include<iostream>
#include<conio.h>
using namespace std;
int abs(int);
int main()
{
	int num;
	cout<<"Enter any number = ";
	cin>>num;
	cout<<"Absolute value of "<<num<<" = ";
	cout<<abs(num);
	getch();
	system("pause");
}
int abs(int n)
{
	if(n<0)
	{
		n=-1*n;
		return n;
	}
	else
	return n;
	
}
