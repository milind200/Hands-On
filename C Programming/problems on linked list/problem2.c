/*
2. Write a program which search last occurrence of particular element from singly linear linked list. 
	Function should return position at which element is found.  
	Function Prototype :int SearchLastOcc( PNODE Head, int no );  
	
	Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|  
	
	Input element : 30  
	
	Output : 6  
	
	Author : Milind Nalawade
	
	Date : 18/08/2021

	Language : C programming

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}node,*pnode,**ppnode;

void Insert(ppnode head,int value)
{
	pnode newn=(pnode)malloc(sizeof(node));
	newn->data=value;
	newn->next=NULL;
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}

int Search(pnode head,int value)
{
	int cnt=0;
	int i=0;
	while(head!=NULL)
	{
		cnt++;
		if(head->data==value)
		{
			i=cnt;
		}	
		head=head->next;	
	}
	return i;
}

void Display(pnode head)
{
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
	printf(" NULL");
	printf("\n");
}

//Entry point function
int main()	
{
	int choice=1,ret=0;
	int value;
	pnode first=NULL;
	while(choice)
	{
		printf("\n-----------------------SINGLY LINKED LIST-----------------------\n");
		printf(" 1. Insert number \n 2. Search last occurrence of a number :  \n 3. Display \n 4. Exit\n");
		printf("\n---------------------------------------------------------------------\n");
		printf("\n Enter your choice : ");
		scanf("%d",&choice);
		printf("\n----------------------------------------------------------------------\n");
		switch(choice)
		{
			case 1:printf("\n Enter your number : ");
						scanf("%d",&value);
						Insert(&first,value);
						break;
			
			case 2:printf("\n Enter your number : ");
						scanf("%d",&value);
						ret=Search(first,value);
						printf("\n Output : %d \n",ret);
						break;
			
			case 3:Display(first);
						break;
			
			case 4:choice=0;
						break;
		}
	}
}