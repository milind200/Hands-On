/*

111.Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function) 
	
	Input :   "Marvellous Multi OS"
	Output :   "Marvellous Multi OS"    in another string

	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : C programming
	
*/
using namespace std;
#include<iostream>

//Logic
void copyString(char* t, char* s)
{
    while (*t++ = *s++)
    {;}
}
 
// Driver Code
int main()
{
    char s2[21] =" Marvellous Multi OS";
    char s1[21];
 
    // Function Call
    copyString(s1, s2);
	cout<<s1;
    return 0;
}	