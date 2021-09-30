'''
6.Write a program which accept one number from user and off 7th bit of that number if it is on. 
	Return modified number. 
	
	Input :  79 
	Output : 15 
	
	Author : Milind Nalawade
	
	Date : 01/08/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
def Chkbit(no):
	mask=0x00000040
	if mask&no==mask:
		return mask^no
	return no	
	
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
	
