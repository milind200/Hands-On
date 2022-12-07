'''
119.Write a program which 2 strings from user and check whether contents of two strings are equal or not.
	   (Implement strcmp() function). 
	
		Input :   “Marvellous Infosystems”   
				 “Marvellous Infosystems” 
		Output :  TRUE 
	
		Author : Milind Nalawade
	
		Date : 05/08/2021
	
		Language : Python 3.9.0
		
'''
import sys
#====
#Logic
#====
def StrCmp(s1,s2):
	flag=1
	if len(s1)!=len(s2):
		flag=0
		return flag
	for i in range (len(s1)):
		if s1[i]!=s2[i]:
			flag=0
			break
	return flag
	
#=============
#Entry point function
#=============
def main():
	s1=sys.argv[1]
	s2=sys.argv[2]
	ret=int(StrCmp(s1,s2))
	if ret==1:
		print("\n TRUE \n")
	else:
		print("\n FALSE \n")
		
#=====
#starter
#=====
if __name__=="__main__":
	main()