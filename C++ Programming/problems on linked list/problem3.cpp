
/*
3. Write a program which returns addition of all element from singly linear linked list.  
	Function Prototype :int Addition( PNODE Head);  

	Input linked list : |10|->|20|->|30|->|40|  
	Output : 100

	Author : Milind Nalawade
	
	Date : 18/08/2021

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
	
	int Addition()
	{
		int sum=0;
		struct Node* temp=head;
		while(temp!=NULL )
		{
			sum+=temp->data;
			temp=temp->next;
		}
		return sum;
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
		cout<<" 1. Insert number \n 2. Addition of all the elements :  \n 3. Display \n 4. Exit\n";
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
			
			case 2:ret=obj.Addition();
						cout<<"\n Output : "<<ret<<"\n";
						break;
			
			case 3:obj.Display();
						break;
			
			case 4:choice=0;
						break;
		}
	}
}


