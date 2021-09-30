'''
118. Write a program which accepts 2 strings from user and concat N characters of 
		second string after first string.Value of N should be accepted from user.
		(Implement strncat() function). Note : If third parameter is greater than the size 
		of second string then concat whole string after first string. 
	
		Input :   “Marvellous Infosystems”    “Logic Building”    5 
		
		Output :  “Marvellous Infosystems Logic”
		
		Author : Milind Nalawade
	
		Date : 05/08/2021
	
		Language : Python 3.9.0
'''

#====
#Logic
#====
def Concat(s1,s2,no):
	arr=s1
	j=len(s1)
	arr+=" "
	i=0
	for i in s2:
		arr+=i
		if no==0:
			break
		no-=1	
	print("\n ",arr)
	
#=============
#Entry point function
#=============
def main():
	s1=input("\n Enter first string : ")
	s2=input("\nEnter the second string:")
	no=int(input("\n Enter your number : "))
	Concat(s1,s2,no)
	
#=====
#starter
#=====
if __name__=="__main__":
	main()