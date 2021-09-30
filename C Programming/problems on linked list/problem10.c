/*
10. Write a program which display addition of digits of element from singly linear linked list.  
  
	  Input linked list : |110|->|230|->|20|->|240|->|640|  
	  
	  Output :  2 5 2 6 10
	  		
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

void DigitAdd(pnode head)
{
	pnode temp=head;
	while(temp!=NULL)
	{
		int  no=temp->data;
		int mod=0,sum=0;
		while(no!=0)
		{
			mod=no%10;
			sum+=mod;
			no=no/10;
		}
		printf(" %d",sum);
		temp=temp->next;
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
		printf(" 1. Insert number \n 2. Addition of digits :  \n 3. Display \n 4. Exit\n");
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
						DigitAdd(first);
						break;
			
			case 3:Display(first);
						break;
			
			case 4:choice=0;
						break;
		}
	}
}