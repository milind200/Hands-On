/*

7. Write a program which accept one number from user and off 7th and 10th bit of that number.
	Return modified number. 
	
	Input :  577
	Output : 1 
	
	Author : Milind Nalawade
	
	Date : 02/08/2021
	
	Language : C++ programming 

*/
using namespace std;
#include<iostream>
//Logic
int ChkBits(int ino)
{
	int pos=0x00000240;
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