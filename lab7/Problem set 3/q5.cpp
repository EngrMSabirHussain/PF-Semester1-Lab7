/*
Problem set 3
Q5.
*/


#include<iostream>
#include<conio.h>
using namespace std;
double fact(int);
int main()
{
	double f,sum=0;
	int num;
	cout<<"Enter any number = ";
	cin>>num;
	for(int l=1;l<=num;l++)
	{
		f=0;
		f=1.0/fact(l);
		sum+=f;
		
	}
	cout<<"Answer = "<<sum;
	getch();
	system("pause");
}
double fact(int a)
{
	int ans=1;
	for(int i=1;i<=a;i++)
	{
		ans*=i;	
	}

	return ans;
	
}
