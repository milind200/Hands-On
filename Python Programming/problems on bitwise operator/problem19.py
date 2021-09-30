'''
19. Write a program which accept one number from user and range of positions from user. Toggle all bits from that range. 
	
	Input : 897  9 13 
	Toggle all bits from position 9 to 13 of input number ie 7286.	
	
	Author : Milind Nalawade
	
	Date : 04/08/2021
	
	Language : Python 3.9.0

'''

import sys
#====
#Logic
#====
def ChkBit(no,ino1,ino2):
	ino=no^((1<<ino2)-ino1)
	print("\n ",ino)
#=============
#Entry point function
#=============
def main():
	no=int(sys.argv[1])
	ino1=int(sys.argv[2])
	ino2=int(sys.argv[3])
	ChkBit(no,ino1,ino2)
		
#=====
#starter
#=====
if __name__=="__main__":
	main()