'''
4. Write a program which accept one number from user and toggle 7th and 10th bit of that number.
	Return modified number. 
	
	Input :  137 
	Output : 713 
	
	Author : Milind Nalawade
	
	Date : 02/08/2021
	
	Language : Python 3.9.0

'''

#====
#Logic
#====
def Chkbit(no):
	mask=0x00000240
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
	
