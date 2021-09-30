/*

116. Write a program which accept string from user and copy that characters of that string into another string in reverse order. 
	
	Input :   “Marvellous Python” 
	Output :   “nohtyP suollevraM” 
	
	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>
#include<string.h>

//Logic
void Copy(char* arr,char* brr)
{
	brr=strrev(arr);	
	printf("\n Output : %s\n",brr);
}	

//Entry point function
int main()	
{
	char arr[30];
	char brr[30];
	printf("\n Enter your string : ");
	scanf("%[^'\n']s",&arr);
	Copy(arr,brr);	
	return 0;
}
	
