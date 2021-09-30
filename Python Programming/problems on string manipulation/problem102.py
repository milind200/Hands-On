'''
102.Write a program which accept string from user and convert it into upper case. 
	
	Input :   "Marvellous Multi OS" 
	Output :   MARVELLOUS MULTI OS 
	
		Author : Milind Nalawade
		
		Date : 15/07/2021
		
		language : Python 3.9.0
'''

#====
#Logic
#====
def ConvertToSmall(str):
	print("\n",str.upper())
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter your string : ")
	ConvertToSmall(str);
#=====
#starter
#=====
if __name__=="__main__":
	main()
