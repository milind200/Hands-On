/*
7. Write a program which accepts file name from user and count number of small characters from that file. 
	
	Input : Demo.txt 
	
	Output : Number of small characters are 21 
	
	Author : Milind Nalawade

	Date : 1/09/2021

	Language : C programming
	
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

//Entry point function
int main()
{
	int fd=0,ret=0,cnt=0,i=0;
	char arr[100]={'\0'};
	
	printf("\n Enter the file name : ");
	scanf("%[^'\n']s",arr);

	fd=open(arr,O_RDONLY|O_CREAT,0777);
	if(fd==-1)
	{
		printf("\n file unalbe to open\n");
	close(fd);
	}

	while((ret=read(fd,arr,100))!=0)
	{
		while(arr[i]!='\0')
		{
			if(arr[i]>=97 && arr[i]<=122)
			{
				cnt++;
			}
			i++;
		}			
	}
	printf("\n Number of small letters in the file : %d \n",cnt);
	return 0;

}
