'''
5. Write application which accept file name from user and one string from user. Write that string at the end of file. 
	
	Enter file name :  Demo.txt 

	Input:	Hello World 
	
	Output :  Write Hello World at the end of Demo.txt file
		
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
	fd=open(str,"a")
	if fd==None:
		print("\n Unable to open the file")
	arr=input("\n Input :  ")
	fd.write(" ")	
	fd.write(arr)
	fd.close()
	
#=====
#starter
#=====
if __name__=="__main__":
	main()