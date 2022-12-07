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
def ChkChar(str,ch):
	count=0
	for i in str:
		if i==ch:
			count+=1
	return count		
#=============
#Entry point function
#=============	
def main():
	str=input("Enter your character : ")
	ch=input("\n Enter your character : ")[0]
	ret=int(ChkChar(str,ch))
	print("\n Frequency of {} in the string is : {} ".format(ch,ret))
		
#=====
#starter
#=====
if __name__=="__main__":
	main()
