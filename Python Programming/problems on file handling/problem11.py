'''
11. Write a program which accept oinformation of students from user and write that information into the file. 
		
	   Author : Milind Nalawade

	   Date : 02/09/2021

	Language : Python 3.9.0

'''

import os

#=============
#Entry point function
#=============
def main():
	str=input("\n Enter file name : ")
	fd=open(str,"a")
	if fd==None:
		print("\n Unable to open the file")
	arr=input("\n Input :  ")
	fd.write("\n"+arr)
	fd.close()
	
#=====
#starter
#=====
if __name__=="__main__":
	main()