/*

6.Write a program which accept one number from user and off 7th bit of that number if it is on. 
	Return modified number. 
	
	Input :  79 
	Output : 15 
	
	Author : Milind Nalawade
	
	Date : 02/08/2021
	
	Language : C++ programming 

*/
using namespace std;
#include<iostream>
//Logic
int ChkBits(int ino)
{
	int pos=0x00000040;
	int flag=pos&ino;
	if(flag==pos)
	{
		return ino^pos;
	}
	return ino;
}

//Entry point function
int main()
{
	int no=0,ret=0;
	cout<<"\n Enter the number :";
	cin>>no;
	ret=ChkBits(no);
	cout<<"\n Output : "<<ret<<"\n";
	return 0;
}	