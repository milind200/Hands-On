/*

34. Accept number from user and display below pattern. 
	Input :  5  
	Output : 5 # 4 # 3 # 2 # 1 #

	Author : Milind	Nalawade
	
	Date : 29/06/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>

//Logic

void Print(int no)
{
	while(no!=0)
	{
		cout<<"#"<<no;
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