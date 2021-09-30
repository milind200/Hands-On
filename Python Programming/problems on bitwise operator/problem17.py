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
def ChkBit(no):
	t1=t2=t3=0
	t1=0x00000100;
	t2=0x00000800;
	t3=0x00000900;
	ino=no&t3;
	if ino==t1 or ino==t2 or ino==t3:
		return 1
	else:
		return 0
		
#=============
#Entry point function
#=============
def main():
	no=int(sys.argv[1])
	ret=ChkBit(no)
	if ret==1:
		print("\n TRUE \n")
	else:
		print("\n FALSE \n")
		
#=====
#starter
#=====
if __name__=="__main__":
	main()