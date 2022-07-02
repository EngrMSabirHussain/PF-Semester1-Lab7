/* Problem set 3
q7
*/

#include<iostream>
#include<conio.h>
using namespace std;
int max(int,int);
int main()
{
	int n1,n2;
	cout<<"Enter 1st number = ";
	cin>>n1;
	cout<<"Enter 2nd number = ";
	cin>>n2;
	cout<<"Maximum  number = "<<max(n1,n2);
	getch();
	system("pause");
}
int max(int a,int b)
{
	int n;
	if(a>b)
	{
		n=a;	
	}
	
	else
	{
		n=b;
	}
	return n;
	
}
