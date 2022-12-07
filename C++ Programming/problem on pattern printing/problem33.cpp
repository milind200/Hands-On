/*

33. Accept number from user and display below pattern. 
	  Input :  5  
	 Output : A B C D E 

	Author : Milind Nalawade
	
	Date: 29/06/2021
	
	language : C++ programming

*/
using namespace std;
#include<iostream>

//Logic

void Print(int no)
{
	char ch='A';
	while(no>0)
	{
		cout<<ch<<" ";
		ch++;
		no--;
	}
}

//Entry point function 

int main()
{
	int no=0;
	cout<<"Enter your number : ";
	cin>>no;
	Print(no);
	return 0;
}