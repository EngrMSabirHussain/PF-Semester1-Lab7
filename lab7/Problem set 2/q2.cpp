/*
Problem set 2
Q2.
Write a function GDC that two numbers and find Highest Common Factor (HCF)(GCD)
of two numbers.
*/

#include<iostream>
#include<conio.h>
using namespace std;
int GDC(int,int);
int main()
{
	int n1,n2;
	cout<<"Enter 1st number = ";
	cin>>n1;
	cout<<"Enter 2nd number = ";
	cin>>n2;
	
	
	cout<<"HCF of "<<n1<<" & "<<n2<<" = "<<GDC(n1,n2);
	getch();
	system("pause");
}
int GDC(int a,int b)
{
	
	int min,hcf=1;
	if(a<b)
	{
		min=a;	
	}
	
	else
	{
		min=b;
	}
	for(int i=1;i<=min;i++)
	{
		if(a%i==0 && b%i==0)
		   hcf=i;
		
	}
	
	return hcf;
	
}
