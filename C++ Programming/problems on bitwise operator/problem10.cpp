/*

10. Write a program which accept one number from user and on its first 4 bits. Return modified number. 
	  
	  Input :  73 
	  Output : 79 
	
	Author : Milind Nalawade
	
	Date : 02/08/2021
	
	Language : C++ programming 

*/

using namespace std;
#include<iostream>
//Logic
int ChkBits(int ino)
{
	int pos=0x00000008;
	int flag=pos|ino;
	return flag;
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