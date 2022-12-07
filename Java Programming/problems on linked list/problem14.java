/*
14. Write a program which display smallest digits of all element from singly linear linked list. 
	
	Input linked list : |11|->|250|->|532|->|415|  
	
	Output :   1 0 2 1 

	Author : Milind Nalawade
	
	Date : 20/08/2021

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
		Node temp=head;
		if(head==null)
		{
			head=newn;
		}
		else
		{
			while(temp.next!=null)
			{
				temp=temp.next;
			}
			temp.next=newn;
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
	
	public void MinDigit()
	{
		Node temp=head;
		System.out.println();
		while(temp!=null)
		{
			int  no=temp.data;
			int mod=0;
			int min=temp.data%10;
			while(no!=0)
			{
				mod=no%10;
				if(min>mod)
				{
					min=mod;
				}
				no=no/10;
			}
			System.out.print(" "+min);
		temp=temp.next;
	}
	
}

};

class problem14
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
			System.out.print(" 1. Insert \n 2. Min digit in a number : \n 3. Display\n 4. Exit \n");
			System.out.print("\n--------------------------------------------------\n");
			System.out.print("\n Enter your choice : ");
			choice=sobj.nextInt();
			switch(choice)
			{
				case 1:System.out.print("\n Enter your number : ");
							value=sobj.nextInt();
							obj.Insert(value);
							break;
				
				case 2:obj.MinDigit();
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