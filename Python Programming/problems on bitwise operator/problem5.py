'''
4. Write a program which checks whether first and last bit is On or OFF. 	
	
	Author : Milind Nalawade
	
	Date : 01/08/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
def Chkbit(no):
	mask=0x80000001
	pos=mask&no
	if pos==mask:
		return 1
	else:
		return 0
	
#=============
#Entry point function
#=============
def main():
	no=int(input("\n Enter your number : "))
	ret=int(Chkbit(no))
	if ret==1:
		print("\n first and last bit is on \n")
	else:
		print("\n first and last bit is off \n")
#=====
#starter
#=====
if __name__== "__main__":
	main()
	
