'''
10. Write a program which accept one number from user and on its first 4 bits. Return modified number. 
	  
	  Input :  73 
	  Output : 79 
	
	Author : Milind Nalawade
	
	Date : 02/08/2021
	
	Language : Python 3.9.0

'''

#====
#Logic
#====
def Chkbit(no):
	mask=0x00000008
	return mask|no
		
#=============
#Entry point function
#=============
def main():
	no=int(input("\n Enter your number : "))
	ret=int(Chkbit(no))
	print("\n Output : {} ".format(ret))
	
#=====
#starter
#=====
if __name__== "__main__":
	main()
	
