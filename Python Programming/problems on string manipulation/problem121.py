'''
121. Accept string from user and check whether the string is palindrome or not without considering its case.
		
		Input :   “1abccBA1” 
		Output :   TRUE 
		
		Author : Milind Nalawade
	
		Date : 04/08/2021
	
		Language : Python 3.9.0

'''
import sys

#====
#Logic
#====
def ChkStr(s1):
	s2=s1.lower()
	return s1.lower() == s2
	
#=============
#Entry point function
#=============
def main():
	s1=sys.argv[1]
	ret=ChkStr(s1)
	if(ret==True):
		print("\n TRUE \n")
	else:
		print("\n FALSE \n")
		
#=====
#starter
#=====
if __name__=="__main__":
	main()