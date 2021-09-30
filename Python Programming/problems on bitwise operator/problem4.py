'''
4. Write a program which checks whether 7th & 8th & 9th bit is On or OFF. 	
	
	input : 448
	output : The 7th & 8th & 9th bit is on
	
	input : 445
	output : The 7th & 8th & 9th is off
	
	Author : Milind Nalawade
	
	Date : 01/08/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
def Chkbit(no):
	mask=0x000001c0
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
		print("\n 7th & 8th & 9th bit is on \n")
	else:
		print("\n 7th & 8th & 9th bit is off \n")
#=====
#starter
#=====
if __name__== "__main__":
	main()
	
