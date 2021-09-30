'''
17.Write a program which accept N and print first 5 multiples of N. 
	
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
		print(i*5,end=" ")
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