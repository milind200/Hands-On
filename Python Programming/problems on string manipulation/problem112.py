'''
112. Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function) 
	
	Input :   "Marvellous Multi OS"    10 
	Output :   " Marvellous "
	Note : If third parameter is greater than the size of source string then copy whole string into destination. 
	
	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : C programming

'''
#====
#Logic
#====
def StringCopy(str,no):
	return str[0:no]

#=============
#Entry point function
#=============
def main():
	str=input("\n Enter your string : ")
	no=int(input("\n Enter your number : "))
	dest=StringCopy(str,no)
	print("\n Output : {} \n".format(dest))
	
#=====
#starter
#=====
if __name__=="__main__":
	main()