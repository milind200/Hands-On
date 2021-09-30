/*
14. Write a recursive program which accept number from user and return its reverse number.  
	
	    Input :  523 
	
	    Output :  325
	  	
    	Author :Milind Nalawade
	
		Date : 26/08/2021
	
		Language : C++ programming

*/
using namespace std;
#include<iostream>
//Logic
int ino=0,mod=0;
int Output(int no)
{
	if(no==0)
	{
		return ino;
	}
	else
	{
		mod=no%10;
		ino=ino*10+mod;
		no=no/10;
		Output(no);
	}
}

//Entry point function
int main()
{
	int no=0,ret=0;
	cout<<"\n Input : ";
	cin>>no;
	ret=Output(no);
	cout<<"\n Output : "<<ret<<"\n";
	return 0;
}	  