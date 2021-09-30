'''
17. Write a program which accept file name which contains information of student and
	   display all names of students having marks greater than 90. 
	   
	   Author : Milind Nalawade

	   Date : 02/09/2021

    	Language : Python 3.9.0

'''
import os
import pickle
class StudentInfo:
	def __init__(self,Name,Id,Marks):
		self.name=Name
		self.id=Id
		self.marks=Marks

class Student:	
	def Insert(self,filename,stdobj):
		fd=open(filename,"ab")
		if fd==None:
			print("\n Unable to open the file \n")
		else:
			print("\n file opened successfully \n")
			pickle.dump(stdobj,fd);
		fd.close()
	
	def LoadData(self,filename):
		sum=0
		fd=open(filename,'rb')
		while fd:
			try :
				list=pickle.load(fd);
				if list.marks>90:
					print("\n ",list.name)
			except EOFError:
				break;
		print()

#=============
#Entry point function
#=============
def main():
	
	filename=input("\n Enter file name : ")
	size=int(input("\n Enter number of student : "))
	sobj=Student()
	print("\n Student with marks greater than 90 are : ")
	for i in range(size):
		name=input("\n Enter student's name : ")
		id=int(input("\n Enter student's id : "))
		marks=int(input("\n Enter student's marks : "))
		SI=StudentInfo(name,id,marks)
		sobj.Insert(filename,SI)
	sobj.LoadData(filename)
	
#=====
#starter
#=====
if __name__=="__main__":
	main()