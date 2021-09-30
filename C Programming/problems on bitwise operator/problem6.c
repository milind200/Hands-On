/*

6.Write a program which accept one number from user and off 7th bit of that number if it is on. 
	Return modified number. 
	
	Input :  79 
	Output : 15 
	
	Author : Milind Nalawade
	
	Date : 02/08/2021
	
	Language : C programming 

*/

#include<stdio.h>
//Logic
int ChkBits(int ino)
{
	int pos=0x00000040;
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
	printf("\n Enter the number :");
	scanf("%d",&no);
	ret=ChkBits(no);
	printf("\n Output : %d\n",ret);
	return 0;
}	