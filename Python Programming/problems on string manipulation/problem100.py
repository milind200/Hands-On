'''
98. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters. 
	
	Input :   "MarvellouS"
	Output :   6 (8-2)  
		
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
def Reverse(str):
	no1=no2=0
	for i in reversed(str):
		print(i,end="")
				
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter your string : ")
	Reverse(str)
#=====
#starter
#=====
if __name__=="__main__":
	main()