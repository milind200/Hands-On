/*
11. Write a recursive program which accept number from user and return largest digit 
	
	Input : 87983 
	
	Output : 9  
	
	Author :Milind Nalawade
	
	Date : 26/08/2021
	
	Language : C++ programming
*/
using namespace std;
#include<iostream>
int Max=0;
int Output(int no)
{
    int mod=0;
    if(no==0)
    {
        return Max;
    }
    else
    {
        mod=no%10;
        if(Max<mod)
        {
            Max=mod;
        }
        no=no/10;
        Output(no);
    }
}

int main()
{
    int no=0,ret=0;
    cout<<"\n Input : ";
    cin>>no;
    ret=Output(no);
    cout<<"\n Output : "<<ret;
}