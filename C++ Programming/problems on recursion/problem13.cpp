/*
13.  Write a recursive program which accept number from user and return smallest digit 
	
		Input : 87983 
	
		Output : 3 
	
		Author :Milind Nalawade
	
		Date : 26/08/2021
	
		Language : C++ programming

*/
using namespace std;
#include<iostream>
int Min=8;
int Output(int no)
{
    int mod=0;
    if(no==0)
    {
        return Min;
    }
    else
    {
        mod=no%10;
        if(Min>mod)
        {
            Min=mod;
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