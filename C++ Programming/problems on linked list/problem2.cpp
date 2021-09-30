
/*
2. Write a program which search last occurrence of particular element from singly linear linked list. 
	Function should return position at which element is found.  
	Function Prototype :int SearchLastOcc( PNODE Head, int no );  
	
	Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|  
	
	Input element : 30  
	
	Output : 6  
	
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
	
int Search(pnode head,int value)
{
	int cnt=0;
	int i=0;
	while(head!=NULL)
	{
		cnt++;
		if(head->data==value)
		{
			i=cnt;
		}	
		head=head->next;	
	}
	return i;
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
		cout<<" 1. Insert number \n 2. Search last occurrence of a number :  \n 3. Display \n 4. Exit\n";
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
			
			case 2:cout<<"\n Enter your number : ";
						cin>>value;
						ret=obj.Search(value);
						cout<<"\n Output : "<<ret<<"\n";
						break;
			
			case 3:obj.Display();
						break;
			
			case 4:choice=0;
						break;
		}
	}
}


