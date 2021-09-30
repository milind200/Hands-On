/*
13. Write a program which display product of all digits of all element from singly linear linked list. (Don’t consider 0)  
	
	Input linked list : |11|->|20|->|32|->|41|  
	
	Output :   1 2 6 4 
	
	Author : Milind Nalawade
	
	Date : 20/08/2021

	Language : C++ programming

*/
using namespace std;
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
void ProductOfDigit(pnode head)
{
	while (head!=NULL)
	{
		int no=head->data;
		int mod=0,rev=1;
		while(no!=0)
		{	
			mod=no%10;
			if(mod!=0)
			{
				rev*=mod;
			}
			no=no/10;
		}
		printf("|%d|-> ",rev);

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
		printf(" 1. Insert number \n 2. ProductOfDigit :  \n 3. Display \n 4. Exit\n");
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
						ProductOfDigit(first);
						break;
			
			case 3:Display(first);
						break;
			
			case 4:choice=0;
						break;
		}
	}
}