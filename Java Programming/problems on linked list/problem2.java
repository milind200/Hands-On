/*
2. Write a program which search last occurrence of particular element from singly linear linked list. 
	Function should return position at which element is found.  
	Function Prototype :int SearchLastOcc( PNODE Head, int no );  
	
	Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|  
	
	Input element : 30  
	
	Output : 6  
	
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
	
	int Search(int value)
	{
		int cnt=0;
		int no=0;
		Node temp=head;
		while(temp!=null)
		{
			cnt++;
			if(temp.data==value)
			{
				no=cnt;
			}
			temp=temp.next;
		}
		return no;
	}
};

class problem2
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
			System.out.print(" 1. Insert \n 2. Last  occurencre of a number : \n 3. Display\n 4. Exit \n");
			System.out.print("\n--------------------------------------------------\n");
			System.out.print("\n Enter your choice : ");
			choice=sobj.nextInt();
			switch(choice)
			{
				case 1:System.out.print("\n Enter your number : ");
							value=sobj.nextInt();
							obj.Insert(value);
							break;
				
				case 2:System.out.print("\n Enter your number : ");
							value=sobj.nextInt();
							int ret=obj.Search(value);
							System.out.print("\n Output : "+ret+"\n");
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