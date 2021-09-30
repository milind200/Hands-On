/*
8. Write a program which accepts file name from user and count number of white spaces from that file. 
	
	Input : Demo.txt 
	
	Output : Number of white spaces are 13 

	Author : Milind Nalawade

	Date : 1/09/2021

	Language : C++ programming
	
*/

using namespace std;
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

//Entry point function
int main()
{
	int fd=0,ret=0,cnt=0,i=0;
	char arr[100]={'\0'};
	
	cout<<"\n Enter the file name : ";
	cin.getline(arr,100);

	fd=open(arr,O_RDONLY|O_CREAT,0777);
	if(fd==-1)
	{
		cout<<"\n file unalbe to open\n";
	close(fd);
	}

	while((ret=read(fd,arr,100))!=0)
	{
		while(arr[i]!='\0')
		{
			if(arr[i]==' ')
			{
				cnt++;
			}
			i++;
		}			
	}
	cout<<"\n Number of spaces are : "<<cnt;
	return 0;

}
