'''
1.Program to divide two numbers 
	
	Author: Milind Nalawade
	
	Date:18/06/2021
	
	language : Python3
'''


#=============
#Entry point function
#=============

def main():
	a=int(input("Enter divident : "))
	b=int(input("Enter divisor : "))
	ans=a/b
	print("Division of {} and {} is = {:.2f}".format(a,b,ans))
	
#========
#starter
#========
if __name__=="__main__":
	main()