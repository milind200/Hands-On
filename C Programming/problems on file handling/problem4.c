/*

4. Write application which accept file name from user and display size of file. 
	
	Input :  Demo.txt 
	
	Output :  File size is 56 bytes 
	
	Author : Milind Nalawade

	Date : 31/08/2021

	Language : C programming

*/

#include <stdio.h>
// Entry point function
int main()
{
	char arr[30]={'\0'};
	FILE* fd;
	printf("\n Enter file name : ");
	gets(arr);
	fd=fopen(arr,"r");
	if(fd==NULL)
	{
		printf("\n Unable to open file \n");
		return 0;
	}
	fseek(fd,0L,SEEK_END);
	int no =ftell(fd);
	printf("\n Size of the file %s is %ld bytes \n",arr,no);
	fclose(fd);
	return 0;
}