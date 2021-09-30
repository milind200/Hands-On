'''
105. Write a program which accept string from user and count number of white spaces 

	Input :   "MarvellouS" 
	Output :   0 
	Input :   "MarvellouS Infosystems" 
	Output :   1 
	
	Author : Milind Nalawade
	
	Date : 15/07/2021
		
	language : python 3.9.0

'''

#====
#Logic
#====
def CountSpace(str):
	no=0
	for i in str:
		if i==" ":
			no+=1
	return no		
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter your string : ")
	ret=int(CountSpace(str));
	print("\n Number of spaces in the string is : {} \n".format(ret))
#=====
#starter
#=====
if __name__=="__main__":
	main()

