'''
2. Write a program which search last occurrence of particular element from singly linear linked list. 
	Function should return position at which element is found.  
	Function Prototype :int SearchLastOcc( PNODE Head, int no );  
	
	Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|  
	
	Input element : 30  
	
	Output : 6  
	
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

#=====
#Logic
#=====	
	def Search(self,no):
		temp=self.head
		cnt=1
		while temp:
			if temp.data==no:
				no=cnt	
			cnt+=1	
			temp=temp.next
		return no	

#=============
#Entry point function		
#=============

def main():
	
	sl=SinglyLinkedList()
	choice=1
	while(choice!=0):
		print("--------------------SinglyLinkedList------------------\n")
		print(" 1. Insert \n 2. Last occurence of an element : \n 3. Display\n 4. Exit ")
		print("--------------------------------------------------------\n")
		choice=int(input(" Enter your choice : "))
		if choice==1:
			value=int(input("\n Enter the element to insert : "))
			sl.Insert(value)
		
		elif choice==2:
			no=int(input(" Enter your element : "))
			ret=int(sl.Search(no))
			print(" Output : {}\n".format(ret))
			
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