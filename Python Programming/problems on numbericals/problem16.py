'''
16.Write a program which accepts N from user and print all odd numbers up to N. 	

	Author : Milind Nalawade
	
	Date : 25/06/2021
	
	Language : Python 3.9.0
	
'''	
#====
#Logic
#====
def Print(no):
	i=1
	while i<=no:
		print(i,end=" ")
		i+=2
		
#=============
#Entry point function
#=============
def main():
	ino=int(input("Enter your number : "))
	Print(ino)
#=======
#starter
#=======
if __name__=="__main__":
	main()