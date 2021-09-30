'''
6. Write a program which displays all elements which are perfect from singly linear linked list.  
	Function Prototype :int DisplayPerfect( PNODE Head);  
	
	Input linked list : |11|->|28|->|17|->|41|->|6|->|89|  
	Output :  6 28 

	Author : Milind Nalawade
	
	Date : 18/08/2021

	Language : Python 3.9.0
	
'''

class Node:
	
	def __init__(self,data=None,next=None):
		self.data=data
		self.next=next
		
class SinglyLinkedList:

	def __init__(self):
		self.head=None
	
	def Insert(self,value):
		newn=Node(value)
		
		if self.head:
			newn.next=self.head
			self.head=newn
		else:
			self.head=newn
	
	def Display(self):	
		temp=self.head
		print()
		while temp:
			print("|",temp.data,"|->",end="")
			temp=temp.next
		print("NULL")
		print()	

#====
#Logic
#====
	
	def Perfect(self):		
		temp=self.head	
		while temp:
			no=temp.data
			sum=0;
			for i in range(1,no):
				if no%i==0:
					sum+=i
			if sum==no:
				print(no," ",end="")
			temp=temp.next
		print()
		
#=============
#Entry point function
#=============

def main():
	
	sl=SinglyLinkedList()
	choice=1
	while(choice!=0):
		print("--------------------SinglyLinkedList------------------\n")
		print(" 1. Insert \n 2. Perfect number : \n 3. Display\n 4. Exit ")
		print("--------------------------------------------------------\n")
		choice=int(input(" Enter your choice : "))
		if choice==1:
			value=int(input("\n Enter the element to insert : "))
			sl.Insert(value)
		
		elif choice==2:
			sl.Perfect()
			
		elif choice==3:
			sl.Display()
		
		elif choice==4:
			choice=0
		
		else:
			print(" Invalid choice !!")
			break
	
#=====
#starter
#=====
if __name__=="__main__":
	main()