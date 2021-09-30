/*
8. Write a program which returns addition of all even element from singly linear linked list.  
	
	Input linked list : |11|->|20|->|32|->|41|  
	
	Output : 52

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
	
	public int AddEven()
	{
		int sum=0;
		Node temp=head;
		while(temp!=null)
		{
			int no=temp.data;
			if(no%2==0)
			{
				sum+=no;
			}
			temp=temp.next;
		}
		return sum;
	} 


};

class problem8
{
	public static void main(String argv[])
	{
		Scanner sobj=new Scanner(System.in);
		int value=0,ret=0;
		int choice=1;
		SinglyLinkedList obj=new SinglyLinkedList();
		while(choice!=0)
		{
			System.out.print("\n-------------------SinglyLinkedList------------\n");
			System.out.print(" 1. Insert \n 2. Even number addition : \n 3. Display\n 4. Exit \n");
			System.out.print("\n--------------------------------------------------\n");
			System.out.print("\n Enter your choice : ");
			choice=sobj.nextInt();
			switch(choice)
			{
				case 1:System.out.print("\n Enter your number : ");
							value=sobj.nextInt();
							obj.Insert(value);
							break;
				
				case 2:ret=obj.AddEven();
							System.out.print("\n Output : "+ret);
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