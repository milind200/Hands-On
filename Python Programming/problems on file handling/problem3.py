'''
3. Write application which accept file name from user and read all data from that file and display contents on screen. 
	
	Input :  Demo.txt 
	
	Output :  Display all data of file.

	Author : Milind Nalawade

	Date : 31/08/2021

	Language : Python 3.9.0
	
'''
import os
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter file name : ")
	fd=open(str,"r")
	if fd:
		print("-"*50)
		print(" File opened successfully !!!")
		print("-"*50)
	else:
		print(" File not found !!!")
	print(" ",fd.read())	
#=====
#starter
#=====
if __name__=="__main__":
	main()
	