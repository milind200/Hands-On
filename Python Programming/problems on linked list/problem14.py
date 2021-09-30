'''
14. Write a program which display smallest digits of all element from singly linear linked list. 
	
	Input linked list : |11|->|250|->|532|->|415|  
	
	Output :   1 0 2 1 

	Author : Milind Nalawade
	
	Date : 20/08/2021

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
		temp=self.head
		if self.head==None:
			self.head=newn
		else:
			while temp.next:
				temp=temp.next
			temp.next=newn
	
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
	def MinDigit(self):
		temp=self.head
		mod=0
		print()
		while temp:
			min=temp.data%10
			mod=0
			no=temp.data
			while no:
				mod=no%10
				if min>mod:
					min=mod
				no=no//10
			print(" ",min,end="")	
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
		print(" 1. Insert \n 2. Min digit in the number : \n 3. Display\n 4. Exit ")
		print("--------------------------------------------------------\n")
		choice=int(input(" Enter your choice : "))
		if choice==1:
			value=int(input("\n Enter the element to insert : "))
			sl.Insert(value)
		
		elif choice==2:
			sl.MinDigit()
			
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