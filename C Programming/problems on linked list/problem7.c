/*
7. Write a program which displays all elements which are prime from singly linear linked list.  
	Function Prototype :int DisplayPrime( PNODE Head);  

	Input linked list : |11|->|20|->|17|->|41|->|22|->|89|  
	
	Output :  11 17 41 89
			
	Author : Milind Nalawade
	
	Date : 19/08/2021

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
//Logic
void Prime(pnode head)
{
	while(head!=NULL)
	{
		int no=head->data;
		int i=2;
		int flag=1;
		for(i=2;i<no/2;i++)
		{
			if(no%i==0)
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			printf(" %d ",no);
		}
		head=head->next;
	}
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
	int choice=1;
	int value;
	pnode first=NULL;
	while(choice)
	{
		printf("\n-----------------------SINGLY LINKED LIST-----------------------\n");
		printf(" 1. Insert number \n 2. Prime number :  \n 3. Display \n 4. Exit\n");
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
			
			case 2:Prime(first);
						break;
			
			case 3:Display(first);
						break;
			
			case 4:choice=0;
						break;
		}
	}
}