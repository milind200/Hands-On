'''
15. Write a program which display largest digits of all element from singly linear linked list. 
	
	Input linked list : |11|->|250|->|532|->|419|  
	
	Output :   1 5 5 9 

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
	def MaxDigit(self):
		temp=self.head
		mod=0
		print()
		while temp:
			mod=max=0
			no=temp.data
			while no:
				mod=no%10
				if max<mod:
					max=mod
				no=no//10
			print(" ",max,end="")	
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
		print(" 1. Insert \n 2. Max digit in the number : \n 3. Display\n 4. Exit ")
		print("--------------------------------------------------------\n")
		choice=int(input(" Enter your choice : "))
		if choice==1:
			value=int(input("\n Enter the element to insert : "))
			sl.Insert(value)
		
		elif choice==2:
			sl.MaxDigit()
			
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