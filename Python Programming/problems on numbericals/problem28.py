'''
28.Write a program which accept number from user and display below pattern.

	Author : Milind Nalawade
	
	Date: 18/06/2021
	
	Language : C++ programming
	
'''

#====
#Logic
#====
def Print(no):
	
	i=1
	while i<=no*2:
		if i<=no: 
			print("# ",end=' ')
		else:
			print("* ",end=' ')
		i+=1	
#=============
#Entry point function 
#=============
def main():
	
	no=int(input("Enter your number : "))
	
	if no<0:
		no*=-1
		
	Print(no)

#=====
#starter
#=====
if __name__=="__main__":
	main()