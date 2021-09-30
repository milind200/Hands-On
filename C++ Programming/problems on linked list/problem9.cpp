/*
9. Write a program which return second maximum element from singly linear linked list.  
	
	Input linked list : |110|->|230|->|320|->|240|  
	
	Output : 240 
	
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
	
//Logic
	int SecMaximum()
	{
		int sum=0;
		struct Node* temp=head;
		struct Node* temp1=head;
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
};

int main()	
{
	int choice=1,ret=0;
	SinglyLinkedList obj;
	int value=0;
	while(choice)
	{
		cout<<"\n-----------------------SINGLY LINKED LIST-----------------------\n";
		cout<<" 1. Insert number \n 2. Second maximum number :  \n 3. Display \n 4. Exit\n";
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
			
			case 2:ret=obj.SecMaximum();
						cout<<"\n Output : "<<ret;
						break;
			
			case 3:obj.Display();
						break;
			
			case 4:choice=0;
						break;
		}
	}
}


