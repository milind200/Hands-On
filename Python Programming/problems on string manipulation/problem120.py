'''
120. Write a program which 2 strings from user and check whether first N contents of two strings are equal or
	    not. (Implement strcmp() function). Note : If third parameter is greater than the size of second string then concat whole string after first string. 
		
		Input :   “Marvellous Infosystems”    
					 “Marvellous Logic Building”    10
		
		Author : Milind Nalawade
	
		Date : 04/08/2021
	
		Language : Python 3.9.0
		
'''
import sys

#====
#Logic
#====
def StrCmp(s1,s2,no):
	flag=1
	for i in range(no):
		if i==len(s1) or i==len(s2):
			flag=0
			break	
		if s1[i]!=s2[i]:
			flag=0
	return flag
	
#=============
#Entry point function
#=============
def main():
	s1=sys.argv[1]
	s2=sys.argv[2]
	no=int(sys.argv[3])
	ret=int(StrCmp(s1,s2,no))
	if ret==1:
		print("\n TRUE \n")
	else:
		print("\n FLASE \n")
		
#=====
#starter
#=====
if __name__=="__main__":
	main()