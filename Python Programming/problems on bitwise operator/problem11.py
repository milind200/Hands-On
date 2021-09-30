'''
11.Write a program which accept one number and position from user and check whether bit at that position 
	is on or off. If bit is one return TURE otherwise return FALSE. 
	
	Input :  10 2 
	Output :  TRUE 
	
	Author : Milind Nalawade
	
	Date : 03/08/2021
	
	Language : Python 3.9.0

'''
import sys

#====
#Logic
#====
def ChkBit(no,pos):
	flag=0
	flag=no&pos
	if flag==pos:
		return 1
	else:
		return 0
		
#=============
#Entry point function
#=============
def main():
	no=int(sys.argv[1])
	pos=int(sys.argv[2])
	ret=int(ChkBit(no,pos))
	if ret==1:
		print("\n TRUE \n")
	else:
		print("\n FALSE \n")
		
#=====
#starter
#=====	
if __name__=="__main__":
	main()