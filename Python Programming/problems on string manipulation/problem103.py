'''
103.Write a program which accept string from user and toggle the case. 
	
		Input :   “Marvellous Multi OS” 
		Output :   mARVELLOUS mULTI os 	
		
		Author : Milind Nalawade
		
		Date : 15/07/2021
		
		language : Python 3.9.0
'''

#====
#Logic
#====
def Convert(str):
	print(str.swapcase())
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter your string : ")
	Convert(str);
#=====
#starter
#=====
if __name__=="__main__":
	main()
