/*
9. Write a program which accepts file name and one character from user and count number of occurrences of that characters from that file. 
	
	Input : Demo.txt  ‘M’ 
	
	Output : Frequency of M is 7 

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
	char ch='\0';
	cout<<"\n Enter the file name : ";
	cin.getline(arr,100);
	cout<<"\n Enter your letter : ";
	cin>>ch;
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
			if(arr[i]==ch)
			{
				cnt++;
			}
			i++;
		}			
	}
	cout<<"\n Frequency of "<<ch<<" is : "<<cnt;
	return 0;

}
