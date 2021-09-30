'''
99. Write a program which accept string from user and check whether it contains vowels in it or not. 

	Input :   “marvellous” 
	Output :   TRUE 
	Input :   “Demo” 
	Output :   TRUE 
	Input :   “xyz” 
	Output :   FALSE
		
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
def CountSmall(str):
	flag=0
	for i in str:
		if i=='a' or i=='A'or i=='e'or i=='E'or i=='i'or i=='I'or i=='o'or i=='O'or i=='u'or i=='U':
			flag=1	
	return flag		
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter your string : ")
	ret=int(CountSmall(str))
	if ret==1:
		print("\n TRUE \n")
	else:
		print("\n FALSE \n")
#=====
#starter
#=====
if __name__=="__main__":
	main()