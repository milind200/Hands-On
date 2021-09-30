'''
32. Write a program which returns difference between Even factorial and odd factorial of given number

	Author : Milind Nalawade
	
	Date : 28/06/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
def Multiply(no):
	ans1=1
	ans2=1;
	while no>=1:
		if no%2!=0:
			ans1*=no
		else:
			ans2*=no
		no-=1
	return ans2-ans1
	
#=============
#Entry point function
#=============
def main():
	no=int(input("Enter your number : "))
	if no<0:
		no*=-1
	ret=int(Multiply(no))
	print("Difference between odd and even factors is = ",ret)
	
#=====
#stater
#=====
if __name__=="__main__":
	main()
	