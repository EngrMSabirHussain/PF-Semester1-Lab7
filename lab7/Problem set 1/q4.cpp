/* Problem set 1
q4
*/

#include<iostream>
#include<conio.h>
using namespace std;
bool vowel(char);
int main()
{
	char ch;
	cout<<"Enter any Charactor = ";
	cin>>ch;
	cout<<"\t\t 1 means Vowel & 0 means consunent \n";
	cout<<"Status = "<<vowel(ch);
	getch();
	system("pause");
}
bool vowel(char c)
{
	if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
	{
		return true;
	}
	else
	return false;
	
}
