/*

35. Accept number from user and display below pattern. 
	Input :  5  
	Output : 1 * 2 * 3 * 4 * 5 *   
	
	Author : Milind	Nalawade
	
	Date : 29/06/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>

//Logic

void Print(int no)
{
    int i=1;
	while(i!=no+1)
	{
		cout<<i<<" * ";
		i++;
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