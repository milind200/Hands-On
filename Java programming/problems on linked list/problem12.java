/*
12. Write a program which display all palindrome elements of singly linked list.  
	
	Input linked list : |11|->|28|->|17|->|414|->|6|->|89|  

	Output :  11 414 6

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
	
	public void PalindromeNumber()
	{
		Node temp=head;
		while(temp!=null)
		{
			int  no=temp.data;
			int mod=0,sum=0;
			while(no!=0)
			{
				mod=no%10;
				sum=sum*10+mod;
				no=no/10;
			}
			if(temp.data==sum)
			{
				System.out.print(" "+sum);
			}
		temp=temp.next;
	}
	
}

};

class problem12
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
			System.out.print(" 1. Insert \n 2. PalindromeNumber : \n 3. Display\n 4. Exit \n");
			System.out.print("\n--------------------------------------------------\n");
			System.out.print("\n Enter your choice : ");
			choice=sobj.nextInt();
			switch(choice)
			{
				case 1:System.out.print("\n Enter your number : ");
							value=sobj.nextInt();
							obj.Insert(value);
							break;
				
				case 2:obj.PalindromeNumber();
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