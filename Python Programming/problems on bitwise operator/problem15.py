'''
15.Write a program which accept one number from user and count number of ON (1) bits in it without 
	using % and / operator. 
	
	Author : Milind Nalawade
	
	Date : 04/08/2021
	
	Language : Python 3.9.0

'''

import sys
#====
#Logic
#====
def ChkBit(no):
	count=0
	while no>0:
		count+=no&1
		no>>=1
	return count
	
#=============
#Entry point function
#=============
def main():
	no=int(sys.argv[1])
	ret=int(ChkBit(no))
	print("\n There are {} bits on \n".format(ret))
	
#=====
#starter
#=====
if __name__=="__main__":
	main()