'''
13.Write a program which accept number from user and print that number of $ & * on screen. 

	Author : Milind Nalawade
	
	Date : 25/06/2021
	
	Language : Python 3.9.0

'''	

def Print(ino):
	while ino!=0:
		print("$ ",end=" ")
		print("* ",end=" ")
		ino=ino-1

def main():
	
	ino=int(input("Enter your number : "))
	Print(ino)

if __name__=="__main__":
	main()