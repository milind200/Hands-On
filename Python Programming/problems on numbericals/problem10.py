'''
10.Write a program to find factorial of given number.  
	
	Author : Milind Nalawade
	
	Date:24/06/2021
	
	Language : Python 3.9.0

'''
#======
#Logic
#======
def Factorial(no):
	i=1
	while no!=0:
		i=i*no
		no=no-1
	return i
#=============
#Entry point function
#=============
def main():
	ino=int(input("Enter your number"))
	ret=Factorial(ino)
	print("Factorial of {} is : ".format(ino),ret)
#======
#starter
#======
if __name__=="__main__":
	main()