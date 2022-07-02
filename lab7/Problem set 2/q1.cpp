/*
Problem set 2.
Q1. Write a function Factor that takes a number as argument and calculate factorial of a
number.
*/


#include<iostream>
#include<conio.h>
using namespace std;
double factor(int);
int main()
{
	int num;
	cout<<"Enter any number = ";
	cin>>num;
	
	cout<<"Factorial of "<<num<<" = "<<factor(num);
	getch();
	system("pause");
}
double factor(int f)
{
	double ans=1;
	for(int i=1;i<=f;i++)
	{
		ans*=i;
	}
	return ans;
	
}
