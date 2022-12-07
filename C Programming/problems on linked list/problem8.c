/*
8. Write a program which returns addition of all even element from singly linear linked list.  
	Function Prototype :int AdditionEven( PNODE Head);  
	
	Input linked list : |11|->|20|->|32|->|41|  
	
	Output : 52
	
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
int AddEven(pnode head)
{
	int sum=0;
	pnode temp=head;
	while(temp!=NULL)
	{
		int no=temp->data;
		if(no%2==0)
		{
			sum+=no;
		}
		temp=temp->next;
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
		printf(" 1. Insert number \n 2. Even Number Addition :  \n 3. Display \n 4. Exit\n");
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
						ret=AddEven(first);
						printf("\n Output : %d",ret);
						break;
			
			case 3:Display(first);
						break;
			
			case 4:choice=0;
						break;
		}
	}
}