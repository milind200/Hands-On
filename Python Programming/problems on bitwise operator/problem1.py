'''
1.Write a program which checks whether 15th bit is On or OFF.
	
	input : 16385
	output : The 15th bit is on
	
	input : 14
	output : The 15th bit is off
	
	Author : Milind Nalawade
	
	Date : 01/08/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
def Chkbit(no):
	mask=0x00004000
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
		print("\n 15th bit is on \n")
	else:
		print("\n 15th bit is off \n")
#=====
#starter
#=====
if __name__== "__main__":
	main()
	
