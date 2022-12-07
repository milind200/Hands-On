'''
10. Write a program which accepts file name and one count from user and read that number 
	  of characters from starting position. 
	
	Input : Demo.txt  12 
	
	Output : Display first 12 characters from Demo.txt 

	Author : Milind Nalawade

	Date : 01/09/2021

	Language : Python 3.9.0
	
'''
import os
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter file name : ")
	fd=open(str,"r")
	no=int(input("\n Enter your number : "))
	if fd:
		print("-"*50)
		print(" File opened successfully !!!")
		print("-"*50)
	else:
		print(" File not found !!!")
	line=fd.read(no)
	
	print("\n Output : ",line)	

#=====
#starter
#=====
if __name__=="__main__":
	main()
	