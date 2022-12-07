'''
6.Write a program which accept one number from user and print that number of even numbers on screen. 
	
	Author: Milind Nalawade
	
	Date: 19/06/2021

	language: Python 3.9.0
	
'''
#==============
#Entry point function
#==============

def main():
	no=int (input("Enter your number : "))
	i=2;
	while no!=0:
		print(i,end=" ")
		i=i+2
		no=no-1
		
#==========
#starter
#==========
if __name__=="__main__":
	main()
