'''
4. Accept one number and check whether is is divisible by 5 or not
	
	Author: Milind Nalawade
	
	Date:18/06/2021
	
	language : python3
	
'''
#===============
#Entry point function
#===============

def main():
	
	no1=int(input("Enter Divident : "))
	no2=int(input("Enter divisor : "))
	
	if no1%no2==0:
		print(" {} is divisible by {}".format(no1,no2))
	else:
		print(" {} is not divisible by {}".format(no1,no2))
		
#============
#starter
#============
if __name__=="__main__":
	main()