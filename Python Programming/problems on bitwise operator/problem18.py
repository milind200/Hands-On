'''
17. Write a program which accept one number from user and check whether 9th or 12th bit is on or off. 
	
	Input :  257  
	Output :  TRUE
	
	Author : Milind Nalawade
	
	Date : 04/08/2021
	
	Language : Python 3.9.0

'''

import sys
#====
#Logic
#====
def ChkBit(no,ino1,ino2):
	i=1<<(ino1)
	j=1<<(ino2)
	if no&i>0 or no&j>0:
		return 1
	else:
		return 0
		
#=============
#Entry point function
#=============
def main():
	no=int(sys.argv[1])
	ino1=int(sys.argv[2])
	ino2=int(sys.argv[3])
	ret=ChkBit(no,ino1,ino2)
	if ret==1:
		print("\n TRUE \n")
	else:
		print("\n FALSE \n")
		
#=====
#starter
#=====
if __name__=="__main__":
	main()