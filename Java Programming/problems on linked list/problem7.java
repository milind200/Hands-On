/*
7. Write a program which displays all elements which are prime from singly linear linked list.  
	Function Prototype :int DisplayPrime( PNODE Head);  

	Input linked list : |11|->|20|->|17|->|41|->|22|->|89|  
	
	Output :  11 17 41 89

	Author : Milind Nalawade
	
	Date : 18/08/2021

	Language : Java 14.0.2

*/

import java.util.*;
import java.lang.*;

class Node
{
	public int data;
	public Node next;
		
	public Node(int value)
	{
		data=value;
		next=null;
	}	
}

class SinglyLinkedList
{
	public Node head;
	
	public SinglyLinkedList()
	{
		head=null;
	}
	
	public void Insert(int value)
	{
		Node newn= new Node(value);
		
		if(head==null)
		{
			head=newn;
		}
		else
		{
			newn.next=head;
			head=newn;
		}
	}
	
	public void Display()
	{
		Node temp=head;
		while(temp!=null)
		{
			System.out.print("|"+temp.data+"|->");
			temp=temp.next;
		}
		System.out.print("NULL");
		System.out.println();
	}
	
	public void Prime()
	{
		while(head!=null)
		{
			int no=head.data;
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
				System.out.print(" "+no);
			}
			head=head.next;
		}
	} 

};

class problem7
{
	public static void main(String argv[])
	{
		Scanner sobj=new Scanner(System.in);
		int value=0;
		int choice=1;
		SinglyLinkedList obj=new SinglyLinkedList();
		while(choice!=0)
		{
			System.out.print("\n-------------------SinglyLinkedList------------\n");
			System.out.print(" 1. Insert \n 2. Prime number : \n 3. Display\n 4. Exit \n");
			System.out.print("\n--------------------------------------------------\n");
			System.out.print("\n Enter your choice : ");
			choice=sobj.nextInt();
			switch(choice)
			{
				case 1:System.out.print("\n Enter your number : ");
							value=sobj.nextInt();
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
		obj.head=null;
	}
}