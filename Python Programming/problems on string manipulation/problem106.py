'''
106.Write a program which accept string from user and accept one character. Check whether that character is present in string or not. 
	
	Input :   "Marvellous Multi OS"    e 
	Output :   TRUE 
	Input :   "Marvellous Multi OS"    W 
	Output :   FALSE 

	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
def ChkChar(str):
	ch=input("\n Enter your character to check in the string : ")[0]
	flag=0
	for i in str:
		if i==ch:
			flag=1
	return flag		
#=============
#Entry point function
#=============	
def main():
	str=input("Enter your character : ")
	ret=int(ChkChar(str))
	if ret==1:
		print("\n TRUE \n")
	else:
		print("\n FALSE \n")
		
#=====
#starter
#=====
if __name__=="__main__":
	main()
