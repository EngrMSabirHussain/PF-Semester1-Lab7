/* Problem set 1
q3
*/

#include<iostream>
#include<conio.h>
using namespace std;
double power(double,int);
int main()
{
	double num;
	int powe;
	cout<<"Enter any number = ";
	cin>>num;
	cout<<"Enter Power of "<<num<<" = ";
	cin>>powe;
	cout<<"\nANSWER = "<<power(num,powe);
	getch();
	system("pause");
}
double power(double n,int p)
{
	double ans=1;
	for(int i=1;i<=p;i++)
	{
		ans*=n;
	}
	return ans;
	
}
