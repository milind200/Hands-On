/*

116. Write a program which accept string from user and copy that characters of that string into another string in reverse order. 
	
	Input :   “Marvellous Python” 
	Output :   “nohtyP suollevraM” 
	
	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : C++ programming
	
*/

using namespace std;
#include<iostream>

string Stringreverse(string& str)
{
    int no=str.length();
    int j=0;
    char brr[30];
    for(int i=no-1;i>=0;i--)
    {
        brr[j]=str[i];
        j++;
    }
    return string(brr);
}

int main()
{
	string str;
	string arr;
	cout<<"Enter your string : ";
	cin>>str;
	arr=Stringreverse(str);
	cout<<"\n Output : "<<arr;
	return 0;
}