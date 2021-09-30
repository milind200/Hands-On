 /*
 19.Write a program which accept file name which contains information of student
	and display the information of student having highest marks. 
		
  	  Author : Milind Nalawade
	
	  Date : 22/08/2021
	
      Language : C programming

*/	

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int max=0;
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

void Max(char*name)
{
	struct demo obj;
	int ret=0;
	int fd=open(name,O_RDONLY);
	if(fd==-1)
	{
		printf("\n Unable to open the the file\n");
		return ;	
	}

	while((ret=read(fd,&obj,sizeof(obj)))!=0)
	{
		if(max<obj.marks)
		{
			max=obj.marks;
		}
	}
	
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

	while((ret=read(fd,&obj,sizeof(obj)))!=0)
	{
		if(max==obj.marks)
		{
			printf(" \n Name : %s \n Id : %d \n Marks : %d \n",obj.name,obj.id,obj.marks);
		}
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
	Max(name);
	display(name);
	return 0;
}
