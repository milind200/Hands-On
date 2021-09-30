'''
1. Write application which accept file name from user and open that file in read mode. 
	
	Input :  Demo.txt 
	
	Output :  File opened successfully.

	Author : Milind Nalawade

	Date : 27/08/2021

	Language : Python 3.9.0

'''
import os
from os import path
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter file name : ")	
	
	if path.isfile(str):
		File=open(str,"r")
		print("\n File opened in read mode !!!\n")
	else:
		print("\n Unable to open the file  !!!\n")
	
#=====
#starter
#=====
if __name__=="__main__":
	main()