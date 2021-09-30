'''
13. Write a program which accept one number and position from user and on that bit. Return modified number. 
	
	  Input :  10 4
	  Output :  14 
	
	Author : Milind Nalawade
	
	Date : 03/08/2021
	
	Language : Python 3.9.0

'''
import sys

#====
#Logic
#====
def ChkBit(no):
	flag=0xf000000f
	ino=no|flag
	print (ino)
	return ino;
		
#=============
#Entry point function
#=============
def main():
	no=int(sys.argv[1])
	ret=int(ChkBit(no))
	print("\n Output : {} \n".format(ret));
	
#=====
#starter
#=====	
if __name__=="__main__":
	main()