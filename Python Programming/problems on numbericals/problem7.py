'''
7.Write a program which accept number from user and print even factors of that number. 
		
	Author: Milind Nalawade
	
	Date: 19/06/2021

	language: Python 3.9.0
'''	

#=============
#Entry point function
#=============

def main():
	no=int(input("Enter your number : "))
	i=2
	j=100
	
	while j!=0:
		
		if i%no==0:
			print(i,end=" ")
		
		i=i+2
		j=j-1	
		
#===========
#starter function
#===========
if __name__=="__main__":
	main()

