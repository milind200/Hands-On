/*
7. Write a program which displays all elements which are prime from singly linear linked list.  
	Function Prototype :int DisplayPrime( PNODE Head);  

	Input linked list : |11|->|20|->|17|->|41|->|22|->|89|  
	
	Output :  11 17 41 89

	Author : Milind Nalawade
	
	Date : 19/08/2021

	Language : C++ programming

*/

using namespace std;
#include<iostream>
struct Node
{
	int data=0;
	struct Node* next;
};

class SinglyLinkedList
{
	private :
				struct Node* head;
	public :
				SinglyLinkedList()
				{
					head=NULL;
				}
				
				~SinglyLinkedList()
				{
					head;
				}
	void Insert(int value)
	{
		struct Node* newn=new Node;
		newn->data=value;
		newn->next=NULL;
		if(head==NULL)
		{
			head=newn;
		}
		else
		{
			newn->next=head;
			head=newn;
		}
	}	
	
	void Display()
	{
		while(head!=NULL)
		{
			cout<<"|"<<head->data<<"|->";
			head=head->next;
		}
		cout<<"NULL";
		cout<<"\n";
	}
	
	void Prime()
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

};

int main()	
{
	int choice=1,ret=0;
	SinglyLinkedList obj;
	int value=0;
	while(choice)
	{
		cout<<"\n-----------------------SINGLY LINKED LIST-----------------------\n";
		cout<<" 1. Insert number \n 2. Perfect number :  \n 3. Display \n 4. Exit\n";
		cout<<"\n---------------------------------------------------------------------\n";
		cout<<"\n Enter your choice : ";
		cin>>choice;
		cout<<"\n----------------------------------------------------------------------\n";
		switch(choice)
		{
			case 1:cout<<"\n Enter your number : ";
						cin>>value;
						obj.Insert(value);
						break;
			
			case 2:obj.Prime();
					break;
			
			case 3:obj.Display();
						break;
			
			case 4:choice=0;
						break;
		}
	}
}


