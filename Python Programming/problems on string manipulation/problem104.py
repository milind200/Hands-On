'''
104. Write a program which accept string from user and display only digits from that string.
	Input :   “marve89llous121” 
	Output :   89121 
	Input :   “Demo” 
	
	Author : Milind Nalawade
	
	Date : 15/07/2021
		
	language : python 3.9.0

'''

#====
#Logic
#====
def Digit(str):
	for i in str:
		if i.isdigit():
			print(i,end=" ")
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter your string : ")
	Digit(str);
#=====
#starter
#=====
if __name__=="__main__":
	main()

