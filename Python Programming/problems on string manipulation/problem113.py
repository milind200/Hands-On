'''
113. Write a program which accept string from user and copy capital characters of that string into another string. 
	
	Input :   “Marvellous Multi OS” 
	Output :   “MMOS” 
	
	Author : Milind Nalawade
	
	Date : 16/07/2021
		
	Language : Python 3.9.0
	
'''
#====
#Logic
#====
def CapString(str):
	dest=""
	for i in str:
		if i.isupper():
			dest=dest+i
	print("\n Output : {}\n".format(dest))	

#=============
#entry point function
#=============
def main():
	str=input("Enter your string : ")
	CapString(str)

#=====
#starter
#=====
if __name__=="__main__":
	main()
