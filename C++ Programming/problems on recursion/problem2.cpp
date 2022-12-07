/*
2. Write a recursive program which display below pattern.  

	Input : 5

	Output :   1 2 3 4 5
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>

//Logic
int i=1;	
void Print(int no)
{
	if(no==0)
	{
		return;
	}
	else
	{
		cout<<" "<<i;
	}
	i++;
	no--;
	Print(no);
}	

//Entry point function
int main()
{
	int no=0;
	cout<<"\n Input : ";
	cin>>no;
	cout<<"\n Output : ";
	Print(no);
	cout<<"\n";
	return 0;
}	