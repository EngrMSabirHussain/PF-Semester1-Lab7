/* Problem set 1
q2
*/

#include<iostream>
#include<conio.h>
using namespace std;
int prime(int);
int main()
{
	int num;
	cout<<"Enter any number = ";
	cin>>num;
	cout<<"\t\t 1 means prime & 0 means not prime \n";
	cout<<"Status = "<<prime(num);
	getch();
	system("pause");
}
int prime(int n)
{
	int p=1;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			p=0;
			break;			
		}
		else
		p=1;
	}
	if(p==0)
	{
		return 0;
	}
	else
	return 1;
	
}
