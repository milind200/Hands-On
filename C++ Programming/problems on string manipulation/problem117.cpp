/*
117. Write a program which accept string from user and copy that characters of that 
		string into another string by removing all white spaces. 
		
		Input :   “Marvel   lous Pyth   on” 
		Output :   “MarvellousPython”
		
		Author : Milind Nalawade
	
		Date : 16/07/2021
	
		Language : Java 14.0.2
*/		

using namespace std;
#include<iostream>
#include<string.h>

//logic
void Removespace(char* str,char* arr)
{
    while(*str!='\0')
    {
        if(*str==' ')
        {
            str++;
        }
        *arr=*str;
        str++;
        arr++;
    }
}

// Entry point function
int main()
{
    char str[30];
    char arr[30];
    cout<<"\n Enter your string : ";
    cin.getline(str,30);
    Removespace(str,arr);
    cout<<"\n Output : "<<arr;
}