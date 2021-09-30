'''

110.Write a program which accept string from user reverse that string in place. 
	
	Input :   "abcd" 
	Output :   "dcba" 
	Input :   "abba" 
	Output :   "abba"

	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : Python 3.9.0
	
'''
#====
#Logic
#====
def Reverse(str):
	print("\n Output : {}  ".format("".join(reversed(str))))
#=============
#Entry point function
#=============	
def main():
	str=input("\n Enter your character : ")
	Reverse(str)
#=====
#starter
#=====
if __name__=="__main__":
	main()
