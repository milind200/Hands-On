'''
29. Accept amount in US dollar and return its corresponding value in Indian currency.
	Consider 1$ as 70 rupees
	
	Author : Milind Nalawade
	
	Date : 28/06/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
def DtoA(no):
	return no*70
#=============
#Entry point function
#=============
def main():
	
	d=int(input("Enter your amount in dollar : "))
	ret=int(DtoA(d))
	print("Amount in rupees is : {} rs".format(ret))
	
#=====
#starter
#=====
if __name__=="__main__":
	main()	
