/*
9. Write a program which return second maximum element from singly linear linked list.  
	Function Prototype :int SecMaximum( PNODE Head);  
	
	Input linked list : |110|->|230|->|320|->|240|  
	Output : 240 
		
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
int SecMaximum(pnode head)
{
	int sum=0;
	pnode temp=head;
	pnode temp1=head;
	int max=0,secmax=0;
	while(temp!=NULL)
	{		
		if(max<temp->data)
		{
			max=temp->data;
		}
		temp=temp->next;
	}
	while(temp1!=NULL)
	{		
		if(secmax<temp1->data && temp1->data!=max)
		{
			secmax=temp1->data;
		}
		temp1=temp1->next;
	}
	
	return secmax;
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
		printf(" 1. Insert number \n 2. Second max number :  \n 3. Display \n 4. Exit\n");
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
						ret=SecMaximum(first);
						printf("\n Output : %d",ret);
						break;
			
			case 3:Display(first);
						break;
			
			case 4:choice=0;
						break;
		}
	}
}