'''
8. Write a program which accepts file name from user and count number of white spaces from that file. 
	
	Input : Demo.txt 
	
	Output : Number of white spaces are 13 

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
	if fd:
		print("-"*50)
		print(" File opened successfully !!!")
		print("-"*50)
	else:
		print(" File not found !!!")
	line=fd.read()
	i=cnt=0
	while i != len(line):
		if line[i]==' ':
			cnt+=1
		i+=1	
	print("\n Number of spaces are : ",cnt)	

#=====
#starter
#=====
if __name__=="__main__":
	main()
	