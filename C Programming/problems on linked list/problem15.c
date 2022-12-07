/*
15. Write a program which display largest digits of all element from singly linear linked list. 
	
	Input linked list : |11|->|250|->|532|->|419|  
	
	Output :   1 5 5 9 
	
	Author : Milind Nalawade
	
	Date : 20/08/2021

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
	pnode temp=*head;
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
}

//Logic
void MaxDigit(pnode head)
{
	while (head!=NULL)
	{
		int no=head->data;
		int max=0,mod=0;
		max=no%10;
		while(no!=0)
		{	
			mod=no%10;
			if(max<mod)
			{
				max=mod;
			}
			no=no/10;
		}
		printf(" %d ",max);

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
	int choice=1,ret=0;
	int value;
	pnode first=NULL;
	while(choice)
	{
		printf("\n-----------------------SINGLY LINKED LIST-----------------------\n");
		printf(" 1. Insert number \n 2. Max Digit In a number:  \n 3. Display \n 4. Exit\n");
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
			
			case 2:
						MaxDigit(first);
						break;
			
			case 3:Display(first);
						break;
			
			case 4:choice=0;
						break;
		}
	}
}
