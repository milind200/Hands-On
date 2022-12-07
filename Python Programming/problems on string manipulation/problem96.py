'''
97. Write a program which accept string from user and count number of captail characters. 

	Input :   "Marvellous"
	Output :   1
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : Python 3.9.0	
'''
#====
#Logic
#====
def CountCaptial(str):
	no=0
	for i in str:
		if i>='A' and i<='Z':
			no+=1
	return no		
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter your string : ")
	ret=int(CountCaptial(str))
	print("\n There are {} captial letters present in the string ".format(ret))
#=====
#starter
#=====
if __name__=="__main__":
	main()