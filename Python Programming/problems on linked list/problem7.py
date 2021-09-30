'''
7. Write a program which displays all elements which are prime from singly linear linked list.  
	Function Prototype :int DisplayPrime( PNODE Head);  

	Input linked list : |11|->|20|->|17|->|41|->|22|->|89|  
	
	Output :  11 17 41 89

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
	
	def Prime(self):		
		temp=self.head	
		while temp:
			no=temp.data
			flag=1;
			for i in range(2,int(no/2)):
				if no%i==0:
					flag=0
			if flag==1:
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
		print(" 1. Insert \n 2. Prime number : \n 3. Display\n 4. Exit ")
		print("--------------------------------------------------------\n")
		choice=int(input(" Enter your choice : "))
		if choice==1:
			value=int(input("\n Enter the element to insert : "))
			sl.Insert(value)
		
		elif choice==2:
			sl.Prime()
			
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