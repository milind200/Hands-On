/*
3. Write a program which returns addition of all element from singly linear linked list.  
	Function Prototype :int Addition( PNODE Head);  

	Input linked list : |10|->|20|->|30|->|40|  
	Output : 100
	
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

int Addition(pnode head)
{
	int sum=0;
	while(head!=NULL )
	{
		sum+=head->data;
		head=head->next;
	}
	return sum;
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
		printf(" 1. Insert number \n 2. Addition of all numbers :  \n 3. Display \n 4. Exit\n");
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
			
			case 2:ret=Addition(first);
						printf("\n Output : %d \n",ret);
						break;
			
			case 3:Display(first);
						break;
			
			case 4:choice=0;
						break;
		}
	}
}	