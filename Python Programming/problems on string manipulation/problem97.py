'''
97. Write a program which accept string from user and count number of small characters. 

	Input :   "Marvellous"
	Output :   9 
		
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
def CountSmall(str):
	no=0
	for i in str:
		if i>='a' and i<='z':
			no+=1
	return no		
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter your string : ")
	ret=int(CountSmall(str))
	print("\n There are {} small letters present in the string ".format(ret))
#=====
#starter
#=====
if __name__=="__main__":
	main()