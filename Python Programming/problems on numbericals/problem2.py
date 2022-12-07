'''
2.Program to print a string multiple times on screen
	
	Author: Milind Nalawade
	
	Date:18/06/2021
	
	language : Python3
'''
#=============
#logic
#=============
def Print(str):
	no=int(input("how many timesto print : "))
	
	while no!=0:
		print(str);
		no=no-1;
	
	
#==============
#Entry point function
#==============
def main():
	str=input("Enter your string : ");
	Print(str)

#===========
#starter
#===========
if __name__=="__main__":
	main()

