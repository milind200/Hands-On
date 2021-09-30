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
def ChkBit(no1,no2):
	pos=1
	no=no1&no2
	print("\n Output : ",end=" ")
	while no>0:
		count=no&1
		if(count==1):
			print(pos,end=" ")
		pos*=2	
		no>>=1
	
	
#=============
#Entry point function
#=============
def main():
	no1=int(sys.argv[1])
	no2=int(sys.argv[2])
	ChkBit(no1,no2)
	print()
	
#=====
#starter
#=====
if __name__=="__main__":
	main()