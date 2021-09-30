'''
14.Write a program which accept number from user and print numbers till that  number

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
		print(i," ",end=" ")
		i=i+1
		
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