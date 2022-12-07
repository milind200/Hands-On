'''
4. Write application which accept file name from user and display size of file. 
	
	Input :  Demo.txt 
	
	Output :  File size is 56 bytes 
	
	Author : Milind Nalawade

	Date : 31/08/2021

	Language : Python 3.9.0
	
'''
import os

#=============
#Entry point function
#=============
def main():
	str=input("\n Enter file name : ")
	if ( os.path.isfile(str))==False:
		print("\n Unable to open the file !!! \n")	
		return
	file_size = os.path.getsize(str)
	print("\n File Size is :", file_size, "bytes")
	
#=====
#starter
#=====
if __name__=="__main__":
	main()