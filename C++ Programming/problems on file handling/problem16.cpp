/*
16. Write a program which accept file name which contains information
	  of student and display all names of students whose name starts with the letter P. 
	
	   Author : Milind Nalawade
	
	  Date : 20/08/2021
	
      Language : C programming
	
*/

#include<stdio.h>
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

void insert(char*name)
{
	struct demo obj;
	int fd=0,ret=0,i=0,size=0;
	fd=open(name,O_WRONLY);
	if(fd==-1)
	{
	printf("\n unable ot open the file\n");
	return;
	}
	else
	{
		printf("\n File successfully opened \n");
	}
	printf("\n Enter the number of students : ");
	scanf("%d",&size);
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf(" Enter the name of student :");
		scanf(" %[^'\n']c",obj.name);
		printf(" Enter the id of student : ");
		scanf("%d",&obj.id);
		printf(" Enter the marks of student :");
		scanf("%d",&obj.marks);
		printf("\n");
		write(fd,&obj,sizeof(obj));
		memset(&obj,0,sizeof(obj));
	}
	close(fd);
}

void display(char*name)
{
	struct demo obj;
	int j=0,ret=0,fd=0;
	char arr;
	char str[20]={'\0'};
	fd=open(name,O_RDONLY);
	if(fd==-1)
	{
		printf("\n Unable to open the the file\n");
		return ;	
	}
	else
	{
		printf("\n File successfully gets opened\n");
	}

	printf(" Enter your character : ");
	scanf("\n%c",&arr);
	printf("\n Names of the students name starting with %c are : \n",arr);
	while((ret=read(fd,&obj,sizeof(obj)))!=0)
	{
		char i=obj.name[0];
		if(arr==i)
		{
			printf(" \n %s",obj.name);
		}
		i='\0';
	}
	printf("\n");
	close(fd);
}

int main()
{
	char name[20]={'\0'};
	printf("\n Enter the file name :");
	scanf("%s",name);
	//insert(name);
	display(name);
	return 0;
}
