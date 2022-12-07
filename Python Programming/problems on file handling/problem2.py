'''
2. Write application which accept file name from user and create that file. 
	
	Input :  Demo.txt 
	
	Output :  File created successfully
	
	Author : Milind Nalawade

	Date : 27/08/2021

	Language : Python 3.9.0

		
'''
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter file name : ")
	f=open(str,'x')
	
#=====
#starter
#=====
if __name__=="__main__":
	main()