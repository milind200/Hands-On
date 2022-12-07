'''
31 .Write a program to find odd factorial of given number.  

	Author : Milind Nalawade
	
	Date : 28/06/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
def Multiply(no):
	ans=1;
	while no>=1:
		if no%2!=0:
			ans*=no
		no-=1
	return ans
	
#=============
#Entry point function
#=============
def main():
	no=int(input("Enter your number : "))
	if no<0:
		no*=-1
	ret=int(Multiply(no))
	print("Multiplication is = ",ret)
	
#=====
#stater
#=====
if __name__=="__main__":
	main()
	