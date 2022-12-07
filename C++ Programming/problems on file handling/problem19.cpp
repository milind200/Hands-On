/*
19. Write a program which accept file name which contains information of student and display 
	  the information of student having highest marks. 
	
	  Author : Milind Nalawade
	
	  Date : 20/08/2021
	
      Language : C++ programming
*/

using namespace std;
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

struct demo
{
	char name[20];
	int id;
	int marks;
};

//insert Logic
void insert(char*name)
{
	struct demo obj;
	int fd=0,ret=0,i=0,size=0;
	fd=open(name,O_WRONLY);
	if(fd==-1)
	{
		cout<<"\n unable ot open the file\n";
		return;
	}
	else
	{
		cout<<"\n File successfully opened \n";
	}
	cout<<"\n Enter the number of students : ";
	cin>>size;
	cout<<"\n";
	for(i=0;i<size;i++)
	{
		cout<<" Enter the name of student :";
		scanf(" %[^'\n']c",obj.name);
		cout<<" Enter the id of student : ";
		cin>>obj.id;
		cout<<" Enter the marks of student :";
		cin>>obj.marks;
		cout<<"\n";
		write(fd,&obj,sizeof(obj));
		memset(&obj,0,sizeof(obj));
	}
	close(fd);
}


//Display logic
void display(char*name,int max)
{
	struct demo obj;
	int j=0,ret=0,fd=0,sum=0;
	char arr[20];
    fd=open(name,O_RDONLY);
	if(fd==-1)
	{
		cout<<"\n Unable to open the the file\n";
		return ;	
	}
	else
	{
		cout<<"\n File successfully gets opened\n";
	}
	
	while((ret=read(fd,&obj,sizeof(obj)))!=0)
	{
			if(obj.marks==max)
		{
			cout<<"\n Name : "<<obj.name<<"\n Id : "<<obj.id<<"\n Marks : "<<obj.marks;
		}
	}
	
	close(fd);
}

//Entry point function
int main()
{
	char name[20]={'\0'};
	cout<<"\n Enter the file name :";
	cin>>name;
	struct demo obj;
	int ret=0;
	int max=0;
	int fd=open(name,O_RDONLY);
	if(fd==-1)
	{
		printf("\n Unable to open the the file\n");
		return 0;	
	}
	//insert(name);
	while((ret=read(fd,&obj,sizeof(obj)))!=0)
	{
	    if(max>obj.marks)
		{
			max=obj.marks;
		}
		cout<<max;
	}

	display(name,max);
	return 0;
}
