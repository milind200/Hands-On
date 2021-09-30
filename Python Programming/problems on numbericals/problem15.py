'''
15.Write a program which accept number from user and print its numbers line. 

	Author : Milind Nalawade
	
	Date : 25/06/2021
	
	Language : Java 14.0.2
	
'''

#=====
#Logic
#=====
def Print(no):
	i=0
	i=-no
	while i!=no+1 :
		print(i,end=" ")
		i=i+1
	
#=============
#Entry point function
#=============

def main():
	
	no=int(input("Enter your number : "))
	Print(no)

#======
#starter
#======
if __name__=="__main__":
	main()	