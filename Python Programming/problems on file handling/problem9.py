'''
9. Write a program which accepts file name and one character from user and count number of occurrences of that characters from that file. 
	
	Input : Demo.txt  ‘M’ 
	
	Output : Frequency of M is 7 

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
	ch=input("\n Enter your character : ")
	if fd:
		print("-"*50)
		print(" File opened successfully !!!")
		print("-"*50)
	else:
		print(" File not found !!!")
	line=fd.read()
	i=cnt=0
	while i != len(line):
		if line[i]==ch:
			cnt+=1
		i+=1	
	print("\n Frequency of {} is : {} \n ".format(ch,cnt))	

#=====
#starter
#=====
if __name__=="__main__":
	main()
	