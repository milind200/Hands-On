/*
10. Write a program which display addition of digits of element from singly linear linked list.  
  
	Input linked list : |110|->|230|->|20|->|240|->|640|  
	  
    Output :  2 5 2 6 10
	
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
		struct Node* temp=head;
		newn->data=value;
		newn->next=NULL;
		if(head==NULL)
		{
			head=newn;
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
	
    void RevDigit()
	{
		struct Node* temp=head;
		while (temp!=NULL)
		{
			int no=temp->data;
			int mod=0,rev=0;
			while(no!=0)
			{	
				mod=no%10;
				rev=rev*10+mod;
				no=no/10;
			}
		printf("|%d|-> ",rev);
		temp=temp->next;
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
		cout<<" 1. Insert number \n 2. Reverse digits in all number:  \n 3. Display \n 4. Exit\n";
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
			
			case 2:obj.RevDigit();
						break;
			
			case 3:obj.Display();
						break;
			
			case 4:choice=0;
						break;
		}
	}
}


