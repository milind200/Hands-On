/*

110.Write a program which accept string from user reverse that string in place. 
	
	Input :   "abcd" 
	Output :   "dcba" 
	Input :   "abba" 
	Output :   "abba"
	
	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>
#include <bits/stdc++.h>
void ChkChar(string arr)
{	
    string str=string(arr.rbegin(),arr.rend());
    
    cout<<"\n"<<"Output : "<<str<<"\n";
}

//Entry point function
int main()
{
	char arr[20];
	char ch='\0';
	int ret=0;
	cout<<"\n Enter your string : ";
	cin.getline(arr,20);
	ChkChar(arr);
	return 0;
}	