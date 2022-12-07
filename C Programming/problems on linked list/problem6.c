/*
6. Write a program which displays all elements which are perfect from singly linear linked list.  
	Function Prototype :int DisplayPerfect( PNODE Head);  
	
	Input linked list : |11|->|28|->|17|->|41|->|6|->|89|  
	Output :  6 28 
		
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
void Perfect(pnode head)
{
	while(head!=NULL)
	{
		int no=head->data;
		int i=1;
		int sum=0;
		for(i=1;i<no;i++)
		{
			if(no%i==0)
			{
				sum+=i;
			}
		}
		if(sum==no)
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
		printf(" 1. Insert number \n 2. Perfect number :  \n 3. Display \n 4. Exit\n");
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
			
			case 2:Perfect(first);
						break;
			
			case 3:Display(first);
						break;
			
			case 4:choice=0;
						break;
		}
	}
}